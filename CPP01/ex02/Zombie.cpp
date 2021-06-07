/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:15:23 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/07 12:51:30 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const& _argName) : _name(_argName)
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

void Zombie::setType(std::string const& _argType)
{
	this->_type = _argType;
}

void Zombie::announce()
{
	std::cout << getName() << ' ' << getType() << ' ' << "Braiiiiiiinnnssss..." << std::endl;
}


