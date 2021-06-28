/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:46:19 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/28 15:58:13 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & orig)
{
	*this = orig;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & orig)
{
	if (this != &orig)
	{
		this->_hitPoints = orig._hitPoints;
		this->_type = orig._type;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, SuperMutant & arg)
{
	os << arg.takeDamage(3);
	return os;
}
