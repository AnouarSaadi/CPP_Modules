/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:08:39 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/09 15:33:46 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _argName) : _name(_argName)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& _argWeapon)
{
	_weapon = &_argWeapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
