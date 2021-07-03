/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:06:36 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/03 14:26:00 by asaadi           ###   ########.fr       */
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

Character::~Character()
{
	for (int i = 0; i < _numberOfMateria; i++)
		delete _materia[i];
	delete [] _materia;
}

Character & Character::operator=(Character const & orig)
{
	if (this != &orig)
	{
		delete this;
		Character* _new = new Character(orig.getName());
		for (int i = 0; i < 4; i++)
			_new->_materia[i] = orig._materia[i];
		*this = *_new;
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
		std::cout << "Invalid materia." << std::endl;
	else
		std::cout << "Full inventory." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < _numberOfMateria)
	{
		if (idx == 3)
			this->_materia[idx] = NULL;
		else
			for (; idx < _numberOfMateria; idx++)
				this->_materia[idx] = this->_materia[idx+1];
		_numberOfMateria--;
	}
	else
		std::cout << "the Materia with index " << idx << " is not exist." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < _numberOfMateria && this->_materia[idx])
		this->_materia[idx]->use(target);
	else
		std::cout << "the Materia with index " << idx << " is not exist." << std::endl;
}
