/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:58:33 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/05 18:28:10 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const & name, int grades): _name(name), _grades(grades), _sign(false)
{
	if (_grades < 1)
		throw GradeTooHighException();
	if (_grades > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src): _name(src._name), _grades(src._grades)
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

int const Form::getGrade() const
{
	return this->_grades;
}

bool Form::getSign()
{
	return this->_sign;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() >= 1 && b.getGrade() <= this->_grades)
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
		<< av.getSign() << ", form grade " << av.getGrade() << '.'
		<< std::endl;
	return os;
}

