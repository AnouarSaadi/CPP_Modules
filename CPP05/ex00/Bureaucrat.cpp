/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:51:47 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/07 17:45:20 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(0)
{}


Bureaucrat::Bureaucrat(std::string const & name, int grade):
_name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	if (this != &src)
		this->_grade = src._grade;
	return *this;
}

std::string const & Bureaucrat::getName() const
{
	return this->_name;
}

const int & Bureaucrat::getGrade()
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high.";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low.";
}

std::ostream & operator<<(std::ostream & os, Bureaucrat & av)
{
	os << "Bureaucrat name " << av.getName() << ", bureaucrat grade " << av.getGrade() << '.' << std::endl;
	return os;
}