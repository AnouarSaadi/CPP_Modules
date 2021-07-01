/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:39:01 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/01 18:38:25 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & orig)
{
	*this = orig;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & orig)
{
	(void)orig;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (ISpaceMarine*)this;
}


void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}