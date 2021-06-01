/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:20:53 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/01 17:03:27 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

void	enterCommmand()
{
	std::cout << std::endl;
	std::cout << "*****************************************************" << std::endl;
	std::cout << "*              TYPE A COMMAND                       *" << std::endl;
	std::cout << "*         > ADD    (Add a new contact)              *" << std::endl;
	std::cout << "*         > SEARCH (Show all the contacts)          *" << std::endl;
	std::cout << "*         > EXIT   (Quit the program)               *" << std::endl;
	std::cout << "*****************************************************" << std::endl;
	std::cout << std::endl;
	std::cout << "PhoneBook $> ";
}

int main()
{
	std::string str;
	MyPhonebook dt;

	while (true)
	{
		enterCommmand();
		std::getline(std::cin, str);
		if (str == "ADD" || str == "add")
			dt.addNewContact();
		else if (str == "SEARCH" || str == "search")
			dt.searchInContacts();
		else if (str == "EXIT" || str == "exit")
		{
			std::cout << "Exit the program." << std::endl;
			return (0);
		}
		else
			std::cout << "Error: Invalid command " << std::endl;
	} 
	return 0;
}