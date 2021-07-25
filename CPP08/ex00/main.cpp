/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 16:13:19 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:19 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <list>

int main()
{
	std::cout << "Test N.01: array of ints." << std::endl;
	try 
	{
		std::array<int, 10> ints ={101,42,13,4,37,6,1337,80,9};
		std::cout << "Array size: " << ints.size() << std::endl;
		std::cout << "Test with a existent element: "  << std::endl;
		easyfind(ints, 1337);
		std::cout << "Test with a nonexistent element: "  << std::endl;
		easyfind(ints, 8);
	}
	catch (const char * msg)
	{
		std::cerr << "Exception: " << msg << std::endl;
	}

	std::cout << "\nTest N.01: list of ints." << std::endl;
	try 
	{
		std::list<int> l;
		l.push_back(13);
		l.push_back(37);
		l.push_back(42);
		std::cout << "Test with a existent element: "  << std::endl;
		easyfind(l, 37);
		std::cout << "Test with a nonexistent element: "  << std::endl;
		easyfind(l, 8);
	}
	catch (const char * msg)
	{
		std::cerr << "Exception: " << msg << std::endl;
	}
}
