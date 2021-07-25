/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:08:33 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:33 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string const & name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!"
		<< std::endl;
}

Victim::Victim(Victim const & orig)
{
	*this = orig;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!"
		<< std::endl;
}

Victim & Victim::operator=(Victim const & orig)
{
	if (this != &orig)
		this->_name = orig._name;
	return *this;
}

std::string const & Victim::getVictimName()
{
	return this->_name;
}

std::ostream & operator<<(std::ostream & os, Victim & arg)
{
	os << "I'm " << arg.getVictimName() << " and I like otters!\n";
	return os;
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!"
		<< std::endl;
}
