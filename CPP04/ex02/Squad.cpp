/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:18:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/30 12:56:59 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _units(nullptr)
{
}

Squad::Squad(Squad const & orig)
{
	*this = orig;
	return ;
}

Squad::~Squad()
{
}

Squad & Squad::operator=(Squad const & orig)
{
	if (this != &orig)
	{}
}

int Squad::getCount() const
{
	int count = 0;
	t_list *tmp = this->_units;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return count;
}

ISpaceMarine* Squad::getUnit(int nUnit) const
{
	t_list *tmp = this->_units;
	for (int i = 0; i < this->getCount() ; i++)
	{
		if (i = nUnit)
			break ;
		tmp = tmp->next;
	}
	return tmp->unit;
}

int Squad::push(ISpaceMarine* unit)
{
	if (!this->_units)
	{
		this->_units->unit = unit;
		this->_units->next = NULL;
		return this->getCount();
	}
	t_list *tmp = this->_units;
	while (this->_units)
	{
		tmp = this->_units;
		this->_units = this->_units->next;
	}
	tmp->next->unit = unit;
	tmp->next->next = NULL;
	return this->getCount();
}
