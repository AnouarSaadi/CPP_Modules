/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:03:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:21:22 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{}

ScavTrap::ScavTrap(std::string const & name): ClapTrap::ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 20;
	std::cout << this->_name << ": SC4V-TP joined the Robots party..." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & orig )
{
	*this = orig;
	return ;
}

ScavTrap::~ScavTrap()
{ 
	std::cout << this->_name << ": SC4V-TP i'm dead." << std::endl;
}

ScavTrap & ScavTrap::operator= ( ScavTrap const & orig )
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

int ScavTrap::attack( std::string const & target )
{
	std::cout	<< "SC4V-TP "<< this->_name << " attacks " << target << " at range, "
			<< "causing " << this->_attackDamage << " points of damage!"
			<< std::endl;
	return this->_attackDamage;
}


void ScavTrap::guardGate()
{
	std::cout << this->_name << ": SC4V-TP I'm a gate keeper today!!!" << std::endl;
}
