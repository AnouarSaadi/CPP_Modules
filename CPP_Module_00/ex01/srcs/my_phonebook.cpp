/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:36:45 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/01 17:59:42 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

MyPhonebook::MyPhonebook() : index(0)
{
}

void clearInput()
{
	// std::cin.clear();
	// std::cin.ignore(INT_MAX, '\n');
}

void MyPhonebook::addNewContact()
{
	std::string str;

	std::cout << std::endl
			  << "New Contact" << std::endl;
	std::cout << "First Name        : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setFirstName(str);
	std::cout << "Last Name         : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setLastName(str);
	std::cout << "Nickname          : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setNickname(str);
	std::cout << "Login             : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setLogin(str);
	std::cout << "Postal Address    : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setPostalAddress(str);
	std::cout << "Email Address     : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setEmailAddress(str);
	std::cout << "Phone Number      : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setPhoneNumber(str);
	std::cout << "Birthday Date     : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setBirthdayDate(str);
	std::cout << "Favorite Meal     : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setFavoriteMeal(str);
	std::cout << "Underwear Color   : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setUnderwearColor(str);
	std::cout << "Darkest Secret    : ";
	std::getline(std::cin, str);
	clearInput();
	contacts[index].setDarkestSecret(str);
	std::cout << std::endl;
	std::cout << "Contact No." << index + 1 << " added." << std::endl;
	index++;
}

void printColumn(std::string arg)
{
	unsigned int i(0);
	int j(0);

	if (arg.size() < 10)
		for (i = 0; i < 10 - arg.size(); i++)
			std::cout << ' ';
	while (i < 10)
	{
		std::cout << arg[j++];
		if (i == 8 && arg.size() > 10)
		{
			std::cout << '.';
			i++;
		}
		i++;
	}
}

void printIndex(int index)
{
	int i(-1);

	while (++i < 9)
		std::cout << ' ';
	std::cout << index;
}

void MyPhonebook::printContacts(int i)
{

	std::cout << '|';
	printIndex(i);
	std::cout << '|';
	printColumn(contacts[i].getFirstName());
	std::cout << '|';
	printColumn(contacts[i].getLastName());
	std::cout << '|';
	printColumn(contacts[i].getNickname());
	std::cout << "|" << std::endl;
}

void MyPhonebook::searchInContacts()
{
	int i(-1);

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (index)
		while (++i < index)
			printContacts(i);
	else
		std::cout << "|                   Empty                   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	if (index)
	{
		std::cout << "Select The Contact Index: ";
		std::cin >> i;
		if (i >= 0 && i < index)
			contacts[i].printContactInfos();
		else
			std::cout << "Error: Contact does not exist" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
}