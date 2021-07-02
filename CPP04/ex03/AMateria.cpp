/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:51:03 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/02 16:07:13 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const & orig)
{
	*this = orig;
	return ;
}

AMateria & AMateria::operator=(AMateria const & orig)
{
	if (this != &orig)
	{
		this->_type = orig._type;
		this->_xp = orig._xp;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	this->_xp +=10;
}