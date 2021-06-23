/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:40:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/23 12:59:02 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{}

FragTrap::FragTrap(std::string const & name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & orig)
{
	*this = orig;
	return ;
}

FragTrap::~FragTrap()
{

}

FragTrap FragTrap::operator= (FragTrap const & orig)
{
	if (this != &orig)
	{
		this->_name = orig._name;
		this->_hitPoints = orig._hitPoints;
		this->_energyPoints = orig._energyPoints;
		this->_attackDamage = orig._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << ": FR4G-TP High fives!!!" << std::endl;
}