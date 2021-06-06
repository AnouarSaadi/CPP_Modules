/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:37:49 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/06 13:02:56 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony* ponyOnTheHeap(std::string& arg)
{
	return new Pony(arg);
}

Pony ponyOnTheStack(std::string& arg)
{
	return Pony(arg);
}

int main()
{
	std::string	sHeap("BOBI");
	std::string	sStack("POPI");
	Pony*	pnHeap = ponyOnTheHeap(sHeap);
	Pony	pnStack = ponyOnTheStack(sStack);
	std::cout << "Pony with name: " << pnHeap->getNamePony() << " is in Heap." <<std::endl;
	std::cout << "Pony with name: " << pnStack.getNamePony() << " is in Stack." << std::endl;
	delete pnHeap;
	return 0;
}