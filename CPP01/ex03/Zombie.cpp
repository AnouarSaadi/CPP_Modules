/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:33:18 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 11:45:03 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string ranNames[5] = {"ZombieA", "ZombieB", "ZombieC", "ZombieD", "ZombieE"};
	std::string ranTypes[3] = {"TypeA", "TypeB", "TypeC"};
	srand(clock());
 	int ranN = 0 + (rand() % 5);
	srand(clock());
 	int ranT = 0 + (rand() % 3);
	_name = ranNames[ranN];
	_type = ranTypes[ranT];
}

Zombie::Zombie(std::string _argName) : _name(_argName)
{
}

Zombie::~Zombie()
{
}

std::string Zombie::getName()
{
	return this->_name;
}

std::string Zombie::getType()
{
	return this->_type;
}

void Zombie::setType(std::string _argType)
{
	this->_type = _argType;
}

void Zombie::announce()
{
	std::cout << getName() << ' ' << getType() << ' ' << "Braiiiiiiinnnssss..." << std::endl;
}