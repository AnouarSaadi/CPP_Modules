/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:03:16 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:20:10 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
}

DiamondTrap::DiamondTrap(std::string const & name) :  ClapTrap(name + "__clap_name"), FragTrap(ClapTrap::_name), ScavTrap(ClapTrap::_name),_name(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << this->_name << ": The monster is here!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & orig)
{
	*this = orig;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ": it's the time to go!!" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	}
	return *this;
}

int DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return this->_attackDamage;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I? : "<< this->_name + ". My ClapTrap name is " << ClapTrap::_name << std::endl;
}
