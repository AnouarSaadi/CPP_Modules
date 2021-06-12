/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:36:03 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/11 14:41:49 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _argName, Weapon& _argWeapon) : _name(_argName), _weapon(_argWeapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}