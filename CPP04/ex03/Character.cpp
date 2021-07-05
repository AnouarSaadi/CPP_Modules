/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:06:36 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/04 16:55:51 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
}

Character::Character(std::string const & name): _name(name), _numberOfMateria(0)
{
	_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

Character::Character(Character const & orig)
{
	*this = orig;
	return ;
}

void Character::destroyMaterias()
{
	for (int i = 0; i < this->_numberOfMateria; i++)
		delete this->_materia[i];
	delete [] this->_materia;
}

Character::~Character()
{
	this->destroyMaterias();
}

Character & Character::operator=(Character const & orig)
{
	if (this != &orig)
	{
		this->destroyMaterias();
		this->_name = orig._name;
		this->_numberOfMateria = orig._numberOfMateria;
		for (int i = 0; i < this->_numberOfMateria; i++)
			this->_materia[i] = orig._materia[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m && _numberOfMateria < 4)
		this->_materia[_numberOfMateria++] = m;
	else if (!m)
		std::cout << "Materia nonexistent." << std::endl;
	else
		std::cout << "Inventory is full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _numberOfMateria)
	{
		if (idx == this->_numberOfMateria - 1)
			this->_materia[idx] = NULL;
		else
			for (; idx < _numberOfMateria - 1; idx++)
				this->_materia[idx] = this->_materia[idx+1];
		_numberOfMateria--;
	}
	else
		std::cout << "The Materia with index " << idx << " is not exist." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < _numberOfMateria && this->_materia[idx])
		this->_materia[idx]->use(target);
	else
		std::cout << "the Materia with index " << idx << " is not exist." << std::endl;
}
