/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:37:49 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:17 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(std::string argName, std::string argCol)
{
	Pony *pnHeap = new Pony(argName, argCol);
	std::cout 	<< "The " + pnHeap->getColorPony()
				<< " Pony with name "
				<< pnHeap->getNamePony()
				<< " is in Heap." <<std::endl;
	delete pnHeap;
}

void ponyOnTheStack(std::string argName, std::string argCol)
{
	Pony pnStack =  Pony(argName, argCol);
	std::cout	<< "The " + pnStack.getColorPony()
				<< " Pony with name "
				<< pnStack.getNamePony()
				<< " is in Stack." << std::endl;
}

int main()
{
	std::cout << "\n--------- 01 ----------" << std::endl;
	ponyOnTheHeap("BOBI", "BLACK");
	std::cout << "\n--------- 02 ----------" << std::endl;
	ponyOnTheStack("POPI", "BROWN");
	std::cout << "\n--------- 03 ----------" << std::endl;
	ponyOnTheHeap("ZOZI", "WHITE");
	std::cout << "\n--------- 04 ----------" << std::endl;
	ponyOnTheStack("YOYI", "PINK");
	return 0;
}
