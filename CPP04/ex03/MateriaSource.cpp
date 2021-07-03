/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:11:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/03 14:09:48 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _numberOfMateria(0)
{
	_materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _numberOfMateria; i++)
		delete _materia[i];
	delete [] _materia;
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
		delete this;
		MateriaSource *_new = new MateriaSource();
		for (int i = 0; i < src._numberOfMateria; i++)
			_new->_materia[i] = src._materia[i];
		_new->_numberOfMateria = src._numberOfMateria;
		*this = *_new;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m && _numberOfMateria < 4)
		this->_materia[_numberOfMateria++] = m;
	else if (!m)
		std::cout << "Invalid materia." << std::endl;
	else
		std::cout << "Full inventory." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _numberOfMateria; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return 0;
}