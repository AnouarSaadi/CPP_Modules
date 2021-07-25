/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 18:32:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:12:28 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "Here we start\n";
	std::cout << "\n================= ShrubberyCreationForm.\n";
	try
	{
		ShrubberyCreationForm f("Home");
		f.action();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n================= RobotomyRequestForm.\n";
	try
	{
		RobotomyRequestForm r("Robotomazing");
		r.action();

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n================= PresidentialPardonForm.\n";
	try
	{
		Bureaucrat b("ex2", 3);
		PresidentialPardonForm p("President");
		b.signForm(p);
		b.executeForm(p);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

