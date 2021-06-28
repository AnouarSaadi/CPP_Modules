/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:15:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/28 14:34:54 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name), _apCostPoints(apcost), _damagePoints(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const & orig)
{
	*this = orig;
	return;
}

AWeapon & AWeapon::operator=(AWeapon const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_damagePoints = orig._damagePoints;
		this->_apCostPoints = orig._apCostPoints;
	}
	return *this;
}

std::string const & AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this,_apCostPoints;
}

int AWeapon::getDamage() const
{
	return this->_damagePoints;
}