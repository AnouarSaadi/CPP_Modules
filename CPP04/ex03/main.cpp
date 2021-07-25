/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:12:22 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:14:50 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	IMateriaSource* src1 = new MateriaSource;
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Cure());
	src1->learnMateria(new Ice());
	src1->learnMateria(new Ice());
	ICharacter* ch1 = new Character("ch1");
	ICharacter* ch2 = new Character("ch2");
	AMateria* tmp1 = src1->createMateria("ice");
	AMateria* tmp2 = src1->createMateria("cure");
	AMateria* tmp3 = src1->createMateria("cure1");
	AMateria* tmp4 = src1->createMateria("ice");
	AMateria* tmp5 = src1->createMateria("cure");
	ch1->equip(tmp1);
	ch1->equip(tmp2);
	ch1->equip(tmp3);
	ch1->equip(tmp4);
	ch1->equip(tmp5);
	ch1->unequip(3);
	for (int i = 0; i < 4; i++)
		ch1->use(i, *ch2);
	delete tmp5;
	delete ch1;
	delete ch2;
	delete src1;
	return 0;
}
