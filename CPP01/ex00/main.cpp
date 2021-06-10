/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:37:49 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 14:26:54 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(std::string argName, std::string argCol)
{
	Pony *pnHeap = new Pony(argName, argCol);
	std::cout << "The " + pnHeap->getColorPony() << \
		" Pony with name " << pnHeap->getNamePony() << " is in Heap." <<std::endl;
	delete pnHeap;
}

void ponyOnTheStack(std::string argName, std::string argCol)
{
	Pony pnStack =  Pony(argName, argCol);
	std::cout << "The " + pnStack.getColorPony() << \
		" Pony with name " << pnStack.getNamePony() << " is in Stack." << std::endl;
}

int main()
{
	std::string	sHeap("BOBI");
	std::string	sStack("POPI");
	ponyOnTheHeap(sHeap, "BLACK");
	ponyOnTheStack(sStack, "BROWN");
	return 0;
}