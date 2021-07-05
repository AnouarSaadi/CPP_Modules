/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:04:43 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/04 11:57:57 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name): _name(name), _actionPoints(40),
_currentWeapon(nullptr)
{
}

Character::Character(Character const & orig)
{
	*this = orig;
	return ;
}

Character::~Character()
{
}

Character & Character::operator=(Character const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_actionPoints = orig._actionPoints;
		this->_currentWeapon = orig._currentWeapon;
	}
	return *this;
}
void Character::recoverAP()
{
	if (!this->_actionPoints)
		return ;
	if ((this->_actionPoints += 10) > 40)
		this->_actionPoints = 40;
}

void Character::equip(AWeapon* wp)
{
	this->_currentWeapon = wp;
}

void Character::attack(Enemy* enemy)
{
	if (!this->_currentWeapon)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType()
		<< " with a " << this->_currentWeapon->getName()
		<< std::endl;
	if (this->_actionPoints)
	{
		if ((this->_actionPoints -= this->_currentWeapon->getAPCost()) < 0)
			this->_actionPoints = 0;
		enemy->takeDamage(this->_currentWeapon->getDamage());
		this->_currentWeapon->attack();
		if (!enemy->getHP())
			delete enemy;
	}
	else
		std::cout << this->_name << " has no AP to attack the enemy" << std::endl;
}

std::string const & Character::getName() const
{
	return this->_name;
}

int & Character::getAPoints()
{
	return this->_actionPoints;
}

AWeapon* Character::getWeapon() const
{
	return this->_currentWeapon;
}

std::ostream & operator<<(std::ostream & os, Character & ch)
{
	if (ch.getWeapon())
		os << ch.getName() + " has " << ch.getAPoints() << " AP and wields a "
			<< ch.getWeapon()->getName()
			<< std::endl;
	else
		os << ch.getName() + " has " << ch.getAPoints() << " AP and is unarmed"
			<< std::endl;
	return os;
}
