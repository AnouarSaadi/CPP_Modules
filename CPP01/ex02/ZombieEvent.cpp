/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:50:13 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 11:39:27 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}
ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string _argType)
{
	this->_type = _argType;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *_new = new Zombie(name);
	_new->setType(this->_type);
	return _new;
}

void	ZombieEvent::randomChump()
{
	std::string ranNames[5] = {"ZombieA", "ZombieB", "ZombieC", "ZombieD", "ZombieE"};
	srand(clock());
 	int res = 0 + (rand() % 5);
	Zombie *zom = newZombie(ranNames[res]);
	zom->announce();
	delete zom;
}