/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:03:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/21 14:50:33 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string const & name ): _name(name), _hitPoints(100), _maxHitPoints(100),
_energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttackDamage(20), _rangedAttackDamage(15),
_armorDamageReduction(3)
{
	std::cout << this->_name << ": SC4V-TP joined the Robots party..." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy )
{
	*this = copy;
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
		this->_hitPoints = orig._hitPoints;
		this->_maxHitPoints = orig._maxHitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_maxEnergyPoints = orig._maxEnergyPoints;
		this->_level = orig._level;
		this->_name = orig._name;
		this->_meleeAttackDamage = orig._meleeAttackDamage;
		this->_rangedAttackDamage = orig._rangedAttackDamage;
		this->_armorDamageReduction = orig._armorDamageReduction;
	}
	return *this;
}

int ScavTrap::rangedAttack( std::string const & target )
{
	std::cout	<< "SC4V-TP "<< this->_name << " attacks " << target << " at range, "
			<< "causing " << this->_rangedAttackDamage << " points of damage!"
			<< std::endl;
	return this->_rangedAttackDamage;
}

int ScavTrap::meleeAttack( std::string const & target )
{
	std::cout	<< "SC4V-TP "<< this->_name << " attacks " << target << " at range, "
			<< "causing " << this->_meleeAttackDamage << " points of damage!"
			<< std::endl;
	return this->_meleeAttackDamage;
}

void ScavTrap::takeDamage( unsigned int amount )
{
	if (amount)
	{
		if ((unsigned int)this->_armorDamageReduction > amount)
		{
			std::cout << this->_name << ": SC4V-TP is that weakness. I can smell??" << std::endl;
			return ;
		}
		amount -= this->_armorDamageReduction;
		if (this->_hitPoints)
		{
			this->_hitPoints -= amount;
			if (this->_hitPoints < 0)
				this->_hitPoints = 0;
			if (this->_hitPoints)
				std::cout << this->_name << ": SC4V-TP Oh my God, I'm leaking! At least I still have my teeth!!" << std::endl;
			else
				std::cout << this->_name << ": SC4V-TP Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
		}
		else
			std::cout << this->_name << ": SC4V-TP I'm dead no need to attack me. Let me get some peace!" << std::endl;
		std::cout << this->_name << ": SC4V-TP has " << this->_hitPoints << " HP." << std::endl;
	}
}
void ScavTrap::beRepaired( unsigned int amount )
{
	if (amount)
	{
		if (this->_hitPoints)
		{
			this->_hitPoints += amount;
			if (this->_hitPoints  > this->_maxHitPoints)
				this->_hitPoints = this->_maxHitPoints;
			std::cout << this->_name << ": SC4V-TP Ah... Much better!" << std::endl;
		}
		else
			std::cout << this->_name << ": SC4V-TP I'm in grave. RIP!!." << std::endl;
		std::cout << this->_name << ": SC4V-TP has " << this->_hitPoints << " HP." << std::endl;
	}
}

void ScavTrap::sniperKillChallenges()
{
	std::cout << this->_name << "" << std::endl;
}

void ScavTrap::humanKillChallenges()
{
	std::cout << this->_name << "" << std::endl;
}

void ScavTrap::fireKillChallenges()
{
	std::cout << this->_name << "" << std::endl;
}

void ScavTrap::explosiveKillChallenges()
{
	std::cout << this->_name << "" << std::endl;

}

void ScavTrap::duelChallenges()
{
	std::cout << this->_name << "" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::cout << this->_name << "" << std::endl;
	// srand(clock());
	// int ran = rand() % 5;
	void (*F_A[5])() = { sniperKillChallenges, humanKillChallenges, fireKillChallenges, explosiveKillChallenges, duelChallenges };
}
