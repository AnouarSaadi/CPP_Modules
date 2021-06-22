/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/21 12:36:49 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string const & name ) : _name(name), _hitPoints(100), _maxHitPoints(100),
_energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttackDamage(30),
_rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout 	<< "Hey there! I'm a FR4G-TP and My name is "
				<< this->_name << ". Let's get this party started. Cheers!"
				<< std::endl;
	std::cout	<< this->_name << ": FR4G-TP joined the party!!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & ft )
{
	std::cout << ft._name 
			  << " FR4G-TP: I'm gonna give you my genes to creating a cloning copy. I'll get a twin."
			  << std::endl;
	*this = ft;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name  << " FR4G-TP has been destroyed. RIP!"<< std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & ft )
{
	if (this != &ft)
	{
		this->_hitPoints = ft._hitPoints;
		this->_maxHitPoints = ft._maxHitPoints;
		this->_energyPoints = ft._energyPoints;
		this->_maxEnergyPoints = ft._maxEnergyPoints;
		this->_level = ft._level;
		this->_name = ft._name;
		this->_meleeAttackDamage = ft._meleeAttackDamage;
		this->_rangedAttackDamage = ft._rangedAttackDamage;
		this->_armorDamageReduction = ft._armorDamageReduction;
	}
	return *this;
}

int FragTrap::rangedAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target << " at range, "
				<< "causing " << this->_rangedAttackDamage << " points of damage!"
				<< std::endl;
	return this->_rangedAttackDamage;
}

int FragTrap::meleeAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target << " at range, "
				<< "causing " << this->_meleeAttackDamage << " points of damage!"
				<< std::endl;
	return this->_meleeAttackDamage;
}

void FragTrap::takeDamage( unsigned int amount)
{
	if (amount)
	{
		if ((unsigned int)this->_armorDamageReduction > amount)
		{
			std::cout << this->_name << ": FR4G-TP Is that weakness. I can smell??" << std::endl;
			return ;
		}
		amount -= this->_armorDamageReduction;
		if (this->_hitPoints)
		{
			this->_hitPoints -= amount;
			if (this->_hitPoints < 0)
				this->_hitPoints = 0;
			if (this->_hitPoints)
				std::cout << this->_name << ": FR4G-TP Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
			else
				std::cout << this->_name << ": FR4G-TP It was a good FR4G-TP." << std::endl;
		}
		else
			std::cout << this->_name << " FR4G-TP is already passed away." << std::endl;
		std::cout << this->_name << ": FR4G-TP has " << this->_hitPoints << " HP." << std::endl;
	}
}

void FragTrap::beRepaired( unsigned int amount)
{
	if (amount)
	{
		if (this->_hitPoints)
		{
			this->_hitPoints += amount;
			if (this->_hitPoints  > this->_maxHitPoints)
				this->_hitPoints = this->_maxHitPoints;
			std::cout << this->_name << ": FR4G-TP Good as new, I think. Am I leaking?" << std::endl;
		}
		else
			std::cout << this->_name << " FR4G-TP is dead. Cannot be repaired." << std::endl;
		std::cout << this->_name << ": FR4G-TP has " << this->_hitPoints << " HP." << std::endl;
	}
}

int FragTrap::getMeleeAttackDamage()
{
	return this->_meleeAttackDamage;
}

int FragTrap::getRangeAttackDamage()
{
	return this->_rangedAttackDamage;
}


int FragTrap::rocketLauncherAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target
				<<  " with a rocket launcher. " <<  this->_name << " lost 25 points of energy!"
				<< std::endl;
	this->_energyPoints -= 25;
	std::cout << this->_name << ": FR4G-TP has " << this->_energyPoints << " energy points." << std::endl;
	return 30;
}

int FragTrap::laserAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target
				<<  " with a laser. " <<  this->_name << " lost 25 points of energy!"
				<< std::endl;
	this->_energyPoints -= 25;
	std::cout << this->_name << ": FR4G-TP has " << this->_energyPoints << " energy points." << std::endl;
	return 15;	
}

int FragTrap::shotgunAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target
				<<  " with a shotgun. " <<  this->_name << " lost 25 points of energy!"
				<< std::endl;
	this->_energyPoints -= 25;
	std::cout << this->_name << ": FR4G-TP has " << this->_energyPoints << " energy points." << std::endl;
	return 35;
}

int FragTrap::pistolAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target
				<<  " with a pistol. " <<  this->_name << " lost 25 points of energy!"
				<< std::endl;
	this->_energyPoints -= 25;
	std::cout << this->_name << ": FR4G-TP has " << this->_energyPoints << " energy points." << std::endl;
	return 25;	
}

int FragTrap::sniperRifleAttack( std::string const & target )
{
	std::cout	<< "FR4G-TP "<< this->_name << " attacks " << target
				<<  " with a sniper rifle. " <<  this->_name << " lost 25 points of energy!"
				<< std::endl;
	this->_energyPoints -= 25;
	std::cout << this->_name << ": FR4G-TP has " << this->_energyPoints << " energy points." << std::endl;
	return 35;
}

int FragTrap::vaulthunter_dot_exe( std::string const & target )
{
	if (this->_energyPoints < 25)
	{
		std::cout << this->_name << ": FR4G-TP I do not have energy to do anything..." << std::endl;
		return 0;
	}
	srand(clock());
	int attack = rand() % 5;
	if (attack == 0)
		return this->rocketLauncherAttack(target);
	if (attack == 1)
		return this->laserAttack(target);
	if (attack == 2)
		return this->shotgunAttack(target);
	if (attack == 3)
		return this->pistolAttack(target);
	if (attack == 4)
		return this->sniperRifleAttack(target);
	return 25;
}