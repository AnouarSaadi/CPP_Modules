/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:25 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/21 12:57:45 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "The party of FR4G-TPs will start soon..." << std::endl;
	FragTrap *ft00 = new FragTrap("Athena");
	FragTrap *ft02 = new FragTrap("Salvador");
	ft02->takeDamage(ft00->rangedAttack("Salvador"));
	FragTrap *ft01 = new FragTrap("Mordecai");
	ft00->takeDamage(ft01->meleeAttack("Athena"));
	ft00->beRepaired(70);
	FragTrap *ft03 = new FragTrap("Timothy");
	ft01->takeDamage(ft03->vaulthunter_dot_exe("Mordecai"));
	ft02->takeDamage(ft00->rangedAttack("Salvador"));
	ft03->takeDamage(ft02->vaulthunter_dot_exe("Timothy"));
	ft00->takeDamage(ft01->meleeAttack("Athena"));
	ft01->beRepaired(70);
	ft03->takeDamage(ft01->meleeAttack("Athena"));
	ft01->takeDamage(ft03->vaulthunter_dot_exe("Mordecai"));
	ft03->takeDamage(ft02->vaulthunter_dot_exe("Mordecai"));
	ft02->takeDamage(ft00->rangedAttack("Salvador"));
	ft03->takeDamage(ft01->rangedAttack("Timothy"));
	ft03->takeDamage(ft02->meleeAttack("Timothy"));
	ft00->takeDamage(ft03->vaulthunter_dot_exe("Athena"));
	delete ft00;
	delete ft01;
	delete ft02;
	delete ft03;
	std::cout << "All the FR4G-TPs destroyed. The party ended!!!!!" << std::endl;
	return 0;
}
