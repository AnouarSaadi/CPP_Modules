/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:33:20 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/12 16:47:20 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::cout << "\n--- First ZombieHorde ---" << std::endl;
	ZombieHorde zHo1 = ZombieHorde(10);
	zHo1.createNZombie();
	zHo1.announce();
	std::cout << "\n--- Second ZombieHorde ---" << std::endl;
	ZombieHorde zHo2 = ZombieHorde(4);
	zHo2.createNZombie();
	zHo2.announce();
	return 0;
}