/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:15:23 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:23:23 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N): _nZombies(N)
{
	zom = new Zombie[N];
}

ZombieHorde::~ZombieHorde()
{
	delete [] zom;
}

void ZombieHorde::createNZombie()
{
	for (int i = 0; i < _nZombies; i++)
		zom[i] = Zombie();
}

void ZombieHorde::announce()
{
	for (int i = 0; i < _nZombies; i++)
		zom[i].announce();
}
