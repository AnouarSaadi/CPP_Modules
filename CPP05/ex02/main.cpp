/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:32:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/06 18:46:45 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::cout << "Here we start\n";
	std::cout << "Test N. 1: RobotomyRequestForm\n";
	try
	{
		RobotomyRequestForm r("target1");
		r.action();

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// std::cout << "Test N. 2: bureaucrat with a low grade\n";
	// try
	// {
	// 	Bureaucrat b("ex2", 151);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	std::cout << "Test N. 3: ShrubberyCreationForm.\n";
	try
	{
		// ShrubberyCreationForm f("target2");
		// f.action();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// std::cout << "Test N. 4: decrement.\n";
	// try
	// {
	// }
	// catch(std::exception& e)
	// {
		// std::cerr << e.what() << '\n';
	// }
}
