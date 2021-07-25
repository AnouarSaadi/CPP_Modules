/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:20:53 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:42 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void	enterCommand()
{
	std::cout << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << "*          TYPE A COMMAND                   *" << std::endl;
	std::cout << "*      > ADD    (Add a new contact)         *" << std::endl;
	std::cout << "*      > SEARCH (Show all the contacts)     *" << std::endl;
	std::cout << "*      > EXIT   (Quit the program)          *" << std::endl;
	std::cout << "*********************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "PhoneBook $> ";
}

int main()
{
	Phonebook dt;
	std::string str;

	while (true)
	{
		enterCommand();
		std::getline(std::cin, str);
		if (!std::strcmp(str.c_str(), "ADD"))
			dt.addNewContact();
		else if (!std::strcmp(str.c_str(), "SEARCH"))
			dt.searchInContacts();
		else if (!std::strcmp(str.c_str(), "EXIT"))
		{
			std::cout << "Exit the program." << std::endl;
			return 0;
		}
		else
			std::cout << "Error: Invalid command " << std::endl;
	} 
	return 0;
}
