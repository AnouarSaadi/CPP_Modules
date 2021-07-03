/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:21:17 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/03 15:12:53 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & orig)
{
	*this = orig;
	return ;
}

Ice & Ice::operator=(Ice const &orig)
{
	if (this != &orig)
	{
		this->_type = orig._type;
		this->_xp = orig._xp;
	}
	return *this;
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice *ret = new Ice;
	*ret = *this;
	return ret;
}
