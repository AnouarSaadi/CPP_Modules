/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:42:31 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/27 15:33:32 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title): _name(name), _title(title)
{
	std::cout << this->_name  + ", "
		<< this->_title + ", is born!"
		<< std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & orig)
{
	*this = orig;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name + ", "
		<< this->_title + ", is dead. Consequences will never be the same!"
		<< std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & orig)
{
	// Need to learn about deep copy.
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_title = orig._title;
	}
	return *this;
}

std::string const & Sorcerer::getSorcererName()
{
	return this->_name;
}

std::string const & Sorcerer::getSorcererTitle()
{
	return this->_title;
}

std::ostream & operator<<(std::ostream & os, Sorcerer & arg)
{
	os << "I am " << arg.getSorcererName() + ", "
		<< arg.getSorcererTitle() << ", and I like ponies!\n";
	return os;
}

void Sorcerer::polymorph(Victim const & arg) const
{
	arg.getPolymorphed();
}