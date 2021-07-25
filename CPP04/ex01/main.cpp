/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:05:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:16:38 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	if (b->getHP())
		delete b;
	delete me;

	Character* crank = new Character("crank");
	std::cout << *crank;
	Enemy* sm = new SuperMutant();
	crank->equip(pr);
	std::cout << *crank;
	crank->equip(pf);
	crank->attack(sm);
	std::cout << *crank;
	crank->equip(pr);
	std::cout << *crank;
	crank->attack(sm);
	std::cout << *crank;
	crank->attack(sm);
	std::cout << *crank;
	crank->recoverAP();
	std::cout << "crank after recovery has " << crank->getAPoints() << " AP." << std::endl;
	if (sm->getHP())
		delete sm;
	delete crank;
	delete pr;

	Character* geer = new Character("Geer");
	std::cout << *geer;
	Enemy* spm = new SpiderMastermind();
	Enemy* cyb = new Cyberdemon();
	AWeapon* cs = new Chainsaw();
	geer->equip(pf);
	std::cout << *geer;
	geer->equip(cs);
	geer->attack(spm);
	std::cout << *geer;
	geer->equip(cs);
	std::cout << *geer;
	geer->attack(cyb);
	std::cout << *geer;
	geer->attack(spm);
	std::cout << *geer;
	if (spm->getHP())
		delete spm;
	if (cyb->getHP())
		delete cyb;
	delete cs;
	delete pf;
	delete geer;

	return 0;
}
