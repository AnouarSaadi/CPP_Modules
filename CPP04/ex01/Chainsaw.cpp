/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chainsaw.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:02:22 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 15:04:50 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Chainsaw.hpp"

Chainsaw::Chainsaw(): AWeapon("Chainsaw", 9, 31)
{
}

Chainsaw::~Chainsaw()
{
}

Chainsaw::Chainsaw(Chainsaw const & orig)
{
	*this = orig;
	return ;
}

Chainsaw & Chainsaw::operator=(Chainsaw const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_apCostPoints = orig._apCostPoints;
		this->_damagePoints = orig._damagePoints;
	}
	return *this;
}

void Chainsaw::attack() const
{
	std::cout << "* Cha-cha-cha-chainsaw, chainsaw *" << std::endl;
}