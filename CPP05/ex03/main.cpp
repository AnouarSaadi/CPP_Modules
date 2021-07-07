/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:32:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/07 17:31:51 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	std::cout << "Here we start\n";

	try
	{
	
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		rrf->action();
		delete rrf;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
	
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery Creation", "Finder");
		rrf->action();
		delete rrf;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
	
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
		rrf->action();
		delete rrf;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
