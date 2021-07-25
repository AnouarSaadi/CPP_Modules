/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:58:33 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:13:03 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _sign(false), _gradeSign(0), _gradeExec(0)
{
}

Form::Form(std::string const & name, int gradeS, int gradeE): _name(name), _sign(false),
_gradeSign(gradeS), _gradeExec(gradeE)
{
	if (_gradeSign < 1)
		throw GradeTooHighException();
	if (_gradeSign > 150)
		throw GradeTooLowException();
	if (_gradeExec < 1)
		throw GradeTooHighException();
	if (_gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src): _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	*this = src;
	return ;
}

Form::~Form()
{
}

Form & Form::operator=(Form const & src)
{
	if (this != &src)
		this->_sign = src._sign;
	return *this;
}

std::string const & Form::getName() const
{
	return this->_name;
}

int Form::getGradeSign() const
{
	return this->_gradeSign;
}

int Form::getGradeExec() const
{
	return this->_gradeExec;
}

bool Form::getSign()
{
	return this->_sign;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_gradeSign)
		this->_sign = true;
	else
		throw Form::GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "the grade of bureaucrat is too high.";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "the grade of bureaucrat is too low.";
}

std::ostream & operator<<(std::ostream & os, Form & av)
{
	os << "Form status: " << av.getName() << " , form sign "
		<< av.getSign() << ", form grade " << av.getGradeSign() << ", form execution "
		<< av.getGradeExec() << '.'
		<< std::endl;
	return os;
}
