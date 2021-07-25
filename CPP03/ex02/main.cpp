/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:25 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:20:52 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "The party will be start soon..." << std::endl;
	ClapTrap *clTrap[2];
	ScavTrap *scTrap[2];
	FragTrap *frTrap[2];
	clTrap[0] = new ClapTrap("Athena");
	clTrap[1] = new ClapTrap("Willhelm");
	clTrap[1]->takeDamage(clTrap[0]->attack("Willhelm"));
	scTrap[0] = new ScavTrap("Salvador");
	scTrap[1] = new ScavTrap("RedBelly");
	scTrap[1]->takeDamage(scTrap[0]->attack("RedBelly"));
	clTrap[1]->beRepaired(25);
	scTrap[1]->beRepaired(35);
	scTrap[1]->guardGate();
	frTrap[0] = new FragTrap("Jack");
	frTrap[1] = new FragTrap("Nisha");
	frTrap[0]->highFivesGuys();
	frTrap[1]->takeDamage(clTrap[1]->attack("Nisha"));
	frTrap[1]->beRepaired(10);
	for (int i = 0; i < 2; i++)
	{
		delete scTrap[i];
		delete clTrap[i];
		delete frTrap[i];
	}
	std::cout << "All the Robots has been destroyed. The party ended!!!!!" << std::endl;
	return 0;
}
