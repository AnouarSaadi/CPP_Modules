/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:25 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/22 18:48:19 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "The party of FR4G-TPs will start soon..." << std::endl;
	ClapTrap *ft00 = new ClapTrap("Athena");
	ClapTrap *ft02 = new ClapTrap("Salvador");
	ft02->takeDamage(ft00->attack("Salvador"));
	ClapTrap *ft01 = new ClapTrap("Mordecai");
	ft00->beRepaired(45);
	ClapTrap *ft03 = new ClapTrap("Timothy");
	ft02->takeDamage(ft00->attack("Salvador"));
	ft01->beRepaired(45);
	ft02->takeDamage(ft00->attack("Salvador"));
	ft03->takeDamage(ft01->attack("Timothy"));
	delete ft00;
	delete ft01;
	delete ft02;
	delete ft03;
	std::cout << "All the FR4G-TPs destroyed. The party ended!!!!!" << std::endl;
	return 0;
}
