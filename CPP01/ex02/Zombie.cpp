/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:15:23 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:23:47 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
	std::cout	<< getName()
				<< ' ' << getType()
				<< ' ' << "Braiiiiiiinnnssss..."
				<< std::endl;
}
