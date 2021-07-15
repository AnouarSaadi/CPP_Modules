/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:08:55 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/08 14:00:32 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}

Form* createFormShr(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}

Form* createFormRob(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

Form* createFormPre(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string const & nameForm, std::string const & target)
{
	ptrToFunc fun[3] = { createFormShr,  createFormRob, createFormPre };
	std::string arr[3] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };
	for (int i = 0; i < 3; i++)
	{
		if (arr[i] == nameForm)
		{
			std::cout << "Intern creates " << nameForm <<std::endl;
			return (fun[i])(target);
		}
	}
	throw Intern::InternException();
	return NULL;
}

const char* Intern::InternException::what() const throw()
{
	return "Intern couldn't create the form";
}