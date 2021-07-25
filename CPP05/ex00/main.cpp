/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:32:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:14:27 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "Here we start\n";
	std::cout << "Test N. 1: bureaucrat with a high grade\n";
	try
	{
		Bureaucrat b("ex1", 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Test N. 2: bureaucrat with a low grade\n";
	try
	{
		Bureaucrat b("ex2", 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Test N. 3: increment.\n";
	try
	{
		Bureaucrat b("ex3", 5);
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Test N. 4: decrement.\n";
	try
	{
		Bureaucrat b("ex4", 149);
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
