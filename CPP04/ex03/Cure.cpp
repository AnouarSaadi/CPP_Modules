/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:07:13 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/03 14:10:34 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & orig)
{
	*this = orig;
	return ;
}

Cure & Cure::operator=(Cure const &orig)
{
	if (this != &orig)
	{
		this->_type = orig._type;
		this->_xp = orig._xp;
	}
	return *this;
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() + "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure;
}