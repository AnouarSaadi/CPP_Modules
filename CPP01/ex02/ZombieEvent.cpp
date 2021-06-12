/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:50:13 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/12 11:30:06 by asaadi           ###   ########.fr       */
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

Zombie 	*ZombieEvent::randomChump()
{
	std::string ranNames[5] = {"OMAR", "ANOUAR", "ZOUHEIR", "AMINE", "YASSIN"};
	srand(clock());
 	int res = 0 + (rand() % 5);
	Zombie *zom = newZombie(ranNames[res]);
	zom->announce();
	return zom;
}