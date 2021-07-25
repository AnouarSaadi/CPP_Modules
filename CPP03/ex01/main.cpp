/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:25 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:21:16 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "The party will be start soon..." << std::endl;
	ClapTrap *clTrap[4];
	ScavTrap *scTrap[4];
	clTrap[0] = new ClapTrap("Athena");
	scTrap[0] = new ScavTrap("Willhelm");
	clTrap[2] = new ClapTrap("Salvador");
	scTrap[2] = new ScavTrap("RedBelly");
	clTrap[2]->takeDamage(clTrap[0]->attack("Salvador"));
	scTrap[2]->takeDamage(scTrap[0]->attack("RedBelly"));
	clTrap[1] = new ClapTrap("Mordecai");
	scTrap[1] = new ScavTrap("Jack");
	clTrap[0]->beRepaired(45);
	scTrap[0]->beRepaired(35);
	clTrap[3] = new ClapTrap("Timothy");
	scTrap[3] = new ScavTrap("Nisha");
	scTrap[0]->guardGate();
	clTrap[2]->takeDamage(clTrap[0]->attack("Salvador"));
	scTrap[2]->takeDamage(scTrap[0]->attack("RedBelly"));
	clTrap[1]->beRepaired(45);
	scTrap[1]->beRepaired(35);
	clTrap[2]->takeDamage(clTrap[0]->attack("Salvador"));
	scTrap[2]->takeDamage(scTrap[0]->attack("RedBelly"));
	clTrap[3]->takeDamage(clTrap[1]->attack("Timothy"));
	scTrap[3]->takeDamage(scTrap[1]->attack("Nisha"));
	scTrap[1]->guardGate();
	for (int i = 0; i < 4; i++)
	{
		delete clTrap[i];
		delete scTrap[i];
	}
	std::cout << "All the Robots has been destroyed. The party ended!!!!!" << std::endl;
	return 0;
}
