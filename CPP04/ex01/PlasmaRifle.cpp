/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:40:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:16:40 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & orig)
{
	*this = orig;
	return ;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_apCostPoints = orig._apCostPoints;
		this->_damagePoints = orig._damagePoints;
	}
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
