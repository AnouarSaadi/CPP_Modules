/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:06:36 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/02 15:43:31 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
}

Character::Character(std::string const & name): _name(name)
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

// Character & Character::operator=(Character const & orig)
// {
// 	if (this != &orig)
// 	{
// 		delete this;
// 		Character* _new = new Character(orig.getName());
// 	}
// }

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	return ;
}

void Character::unequip(int idx)
{
	
}
