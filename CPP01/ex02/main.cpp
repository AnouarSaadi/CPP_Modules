/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:41:04 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/12 16:46:02 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zev1;
	std::cout << "\n--- Creating a Zombie with newZombie function ---" << std::endl;
	Zombie *z1 = zev1.newZombie("Omar");
	z1->setType("Dolphin");
	z1->announce();
	delete z1;
	zev1.setZombieType("TypeH");
	std::cout << "\n--- Creating a Zombie with randomchump function ---" << std::endl;
	Zombie *z2 = zev1.randomChump();
	delete z2;
	return 0;
}