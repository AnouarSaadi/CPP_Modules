/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:11:42 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:16:46 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const & orig)
{
	*this = orig;
	return ;
}

PowerFist & PowerFist::operator=(PowerFist const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_apCostPoints = orig._apCostPoints;
		this->_damagePoints = orig._damagePoints;
	}
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
