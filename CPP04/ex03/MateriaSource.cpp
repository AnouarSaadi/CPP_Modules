/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:11:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:14:48 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _numberOfMateria(0)
{
	_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

void MateriaSource::destroyMaterias()
{
	for (int i = 0; i < this->_numberOfMateria; i++)
		delete this->_materia[i];
	delete [] this->_materia;
	this->_numberOfMateria = 0;
}

MateriaSource::~MateriaSource()
{
	this->destroyMaterias();
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		this->destroyMaterias();
		this->_numberOfMateria = src._numberOfMateria;
		for (int i = 0; i < src._numberOfMateria; i++)
			this->_materia[i] = src._materia[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m && this->_numberOfMateria < 4)
		this->_materia[_numberOfMateria++] = m;
	else if (!m)
		std::cout << "Invalid materia." << std::endl;
	else
	{
		std::cout << "Full inventory." << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _numberOfMateria; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	std::cout << "Unknown type of materia." << std::endl;
	return 0;
}
