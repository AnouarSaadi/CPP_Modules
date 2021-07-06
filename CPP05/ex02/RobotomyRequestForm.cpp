/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:41:23 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/06 19:01:26 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
Form("RobotomyRequest", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->Form::operator=(src);
	return *this;
}

void RobotomyRequestForm::action()
{
	try
	{
		std::cout << "⛏🔧⛏Yeah.. (grrrrr)⛏🔧⛏\n";
		std::cout << "⛏🔧⛏DMX (grrrrr), Ja Rule⛏🔧⛏\n";
		std::cout << "⛏🔧⛏Cormega, Fatal Hussein (grrrrr)⛏🔧⛏\n";
		std::cout << "⛏🔧⛏Drrrrr.......⛏🔧⛏\n";
		srand(clock());
		if ((rand() % 2))
			throw this->getTarget();
		std::cout << this->getTarget() << ": (50%) has been robotomized successfully." << std::endl;
	}
	catch(std::string msg)
	{
		std::cerr << msg << ": (50%) failed to be robotomize." << '\n';
	}		
}