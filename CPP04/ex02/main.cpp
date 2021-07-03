/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:23:13 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/03 12:07:27 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	std::cout << "Check all the code is work well..." << std::endl;
	ISpaceMarine* jack = new TacticalMarine;
	ISpaceMarine* bin = new AssaultTerminator;
	ISquad* squad_ = new Squad;
	std::cout << "number of units in squad: " << squad_->getCount() << std::endl;
	squad_->push(jack);
	squad_->push(bin);
	std::cout << "number of units in squad: " << squad_->getCount() << std::endl;
	ISpaceMarine *jackCopy = jack->clone();
	squad_->push(jackCopy);
	ISpaceMarine *binCopy = bin->clone();
	squad_->push(binCopy);
	std::cout << "number of units in squad: " << squad_->getCount() << std::endl;
	for (int i = 0; i < squad_->getCount(); ++i)
	{
		ISpaceMarine* u = squad_->getUnit(i);
		u->battleCry();
		u->rangedAttack();
		u->meleeAttack();
	}
	delete squad_;
	std::cout << "number of units in squad: " << squad_->getCount() << std::endl;
	return 0;
}
