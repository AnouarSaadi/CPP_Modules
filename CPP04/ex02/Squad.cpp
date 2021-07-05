/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:18:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/04 15:12:02 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _units(nullptr), _count(0)
{
}

Squad::Squad(Squad const & orig)
{
	*this = orig;
	return ;
}

void Squad::destroyUnits()
{
	t_list *tmp;
	while (this->_units)
	{
		tmp = this->_units;
		this->_units = this->_units->next;
		delete tmp->unit;
		delete tmp;
	}
	this->_units = nullptr;
	this->_count = 0;
}

Squad::~Squad()
{
	this->destroyUnits();
}

Squad & Squad::operator=(Squad const & orig)
{
	if (this != &orig)
	{
		this->destroyUnits();
		t_list *tmp = orig._units;
		while (tmp)
		{
			push(tmp->unit);
			tmp = tmp->next;
		}
	}
	return *this;
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine* Squad::getUnit(int nUnit) const
{
	t_list *tmp = this->_units;
	for (int i = 0; i < this->getCount(); i++)
	{
		if (i == nUnit)
			break ;
		tmp = tmp->next;
	}
	return tmp->unit;
}

int Squad::push(ISpaceMarine* unit)
{
	if (!unit)
		return this->_count;
	t_list *tmp = this->_units;
	while (tmp)
	{
		if (tmp->unit == unit)
			return this->_count;
		tmp = tmp->next;
	}
	if (!this->_units)
	{
		this->_units = new t_list;
		this->_units->unit = unit;
		this->_units->next = NULL;
		return ++this->_count;
	}
	tmp = this->_units;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new t_list;
	tmp->next->unit = unit;
	tmp->next->next = NULL;
	return ++this->_count;
}
