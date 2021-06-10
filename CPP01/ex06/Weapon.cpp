/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:23:57 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/09 15:21:00 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _argType): _type(_argType)
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(const std::string& _argType)
{
	this->_type = _argType;
}
