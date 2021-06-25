/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:25 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/25 16:55:18 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "The party will be start soon..." << std::endl;
	ClapTrap *fTrap[4];
	fTrap[0] = new ClapTrap("Athena");
	fTrap[2] = new ClapTrap("Salvador");
	fTrap[2]->takeDamage(fTrap[0]->attack("Salvador"));
	fTrap[1] = new ClapTrap("Mordecai");
	fTrap[0]->beRepaired(45);
	fTrap[3] = new ClapTrap("Timothy");
	fTrap[2]->takeDamage(fTrap[0]->attack("Salvador"));
	fTrap[1]->beRepaired(45);
	fTrap[2]->takeDamage(fTrap[0]->attack("Salvador"));
	fTrap[3]->takeDamage(fTrap[1]->attack("Timothy"));
	delete fTrap[0];
	delete fTrap[1];
	delete fTrap[2];
	delete fTrap[3];
	std::cout << "All the FR4G-TPs destroyed. The party ended!!!!!" << std::endl;
	return 0;
}
