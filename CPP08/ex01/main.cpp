/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:23:14 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:14 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "Test N01: Normal test and exception of full span " << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(25);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTest N02: The exception of find a span." << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTest N03: Add a range of numbers without calling add number multiple times." << std::endl;
	try
	{
		std::vector<int> vecInts;
		for (int i = 0; i < 1000; i++)
			vecInts.push_back(i * 42);
		Span sp = Span(1000);
		sp.addNumber(vecInts.begin(), vecInts.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "Copy constructor" << std::endl;
		Span spCp = Span(sp);
		std::cout << spCp.shortestSpan() << std::endl;
		std::cout << spCp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
