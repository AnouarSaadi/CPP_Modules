/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:41:04 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/07 19:33:09 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <sstream>

void	randomChump()
{
	
}

int main()
{
	Zombie *zom[10];
	ZombieEvent zEv0;
	ZombieEvent zEv1;
	zEv0.setZombieType("TypeA");
	zEv1.setZombieType("TypeB");
	for (int i = 0; i < 10; i++)
	{
		std::stringstream ss;
		ss << i;
		std::string s;
		ss >> s;
		if (i % 2 == 0)
			zom[i] = zEv0.newZombie("Zombie" + s);
		else
			zom[i] = zEv1.newZombie("Zombie" + s);
		zom[i]->announce();
	}
	return 0;
}