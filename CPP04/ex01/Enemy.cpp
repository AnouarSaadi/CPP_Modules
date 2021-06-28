/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:25:51 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/28 15:45:41 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hitPoints(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & orig)
{
	*this = orig;
	return ;
}

Enemy::~Enemy()
{

}

Enemy & Enemy::operator=(Enemy const & orig)
{
	if (this != &orig)
	{
		this->_hitPoints = orig._hitPoints;
		this->_type = orig._type;
	}
	return *this;
}

std::string const & Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hitPoints;
}

void Enemy::takeDamage(int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
	}
}