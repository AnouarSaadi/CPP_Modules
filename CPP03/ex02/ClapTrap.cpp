/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/24 10:37:04 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{}

ClapTrap::ClapTrap( std::string const & name ) : _name(name), _hitPoints(10),
_energyPoints(10), _attackDamage(0)
{
	std::cout 	<< this->_name<< ": CL4P-TP Hey there! Let's get this party started. Cheers!"
				<< std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & orig )
{
	*this = orig;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name  << ": CL4P-TP I'm destroyed. I smell death. RIP!"<< std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & orig )
{
	if (this != &orig)
	{
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_name = orig._name;
	}
	return *this;
}

int ClapTrap::attack( std::string const & target )
{
	std::cout	<< "CL4P-TP "<< this->_name << " attacks " << target << " at range, "
				<< "causing " << this->_attackDamage << " points of damage!"
				<< std::endl;
	return this->_attackDamage;
}

void ClapTrap::takeDamage( unsigned int amount)
{
		if (this->_hitPoints)
		{
			this->_hitPoints -= amount;
			if (this->_hitPoints < 0)
				this->_hitPoints = 0;
			std::cout << this->_name << ": CL4P-TP Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
		}
		else
			std::cout << this->_name << " CL4P-TP is already passed away." << std::endl;
		std::cout << this->_name << ": CL4P-TP has " << this->_hitPoints << " HP." << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount)
{
		if (this->_hitPoints)
		{
			this->_hitPoints += amount;
			std::cout << this->_name << ": CL4P-TP Good as new, I think. Am I leaking?" << std::endl;
		}
		else
			std::cout << this->_name << " CL4P-TP is dead. Cannot be repaired." << std::endl;
		std::cout << this->_name << ": CL4P-TP has " << this->_hitPoints << " HP." << std::endl;
}

int ClapTrap::getAttackDamage()
{
	return this->_attackDamage;
}