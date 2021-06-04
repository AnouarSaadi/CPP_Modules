/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:36:45 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/04 15:46:16 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

MyPhonebook::MyPhonebook() : index(0)
{
}


std::string trim(std::string& s);

void MyPhonebook::addNewContact()
{
	if (index < 8)
	{
	std::string str;
	std::cout << std::endl
			  << "New Contact" << std::endl;
	std::cout << "First Name        : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setFirstName(str);
	std::cout << "Last Name         : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setLastName(str);
	std::cout << "Nickname          : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setNickname(str);
	std::cout << "Login             : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setLogin(str);
	std::cout << "Postal Address    : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setPostalAddress(str);
	std::cout << "Email Address     : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setEmailAddress(str);
	std::cout << "Phone Number      : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setPhoneNumber(str);
	std::cout << "Birthday Date     : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setBirthdayDate(str);
	std::cout << "Favorite Meal     : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setFavoriteMeal(str);
	std::cout << "Underwear Color   : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setUnderwearColor(str);
	std::cout << "Darkest Secret    : ";
	std::getline(std::cin, str);
	str = trim(str);
	contacts[index].setDarkestSecret(str);
	std::cout << std::endl;
	std::cout << "Contact No." << index + 1 << " added." << std::endl;
	index++;
	}
	else
		std::cout << "The number of contacts possibly to add has been reached." << std::endl;
}

void printColumn(std::string arg)
{
	int i(0);
	
	if (arg.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << arg;
	}
	else if (arg.size() > 10)
	{
		while (i < 10)
		{
			std::cout << std::setw(1);
			std::cout << arg[i];
			if (i == 8)
			{
				std::cout << std::setw(1);
				std::cout << '.';
				i++;
			}
			i++;
		}
	}
}

void MyPhonebook::printContacts(int i)
{

	std::cout << '|';
	std::cout << std::setw(10);
	std::cout << i;
	std::cout << '|';
	printColumn(contacts[i].getFirstName());
	std::cout << '|';
	printColumn(contacts[i].getLastName());
	std::cout << '|';
	printColumn(contacts[i].getNickname());
	std::cout << "|" << std::endl;
}

std::string begTrim(std::string& s)
{
	int j(0);
	for (int i = 0; (size_t)i < s.length(); i++)
	{
		if (!std::iswspace(s[i]))
			break ;
		j++;
	}
	return s.substr(j);
}

std::string endTrim(std::string& s)
{
	int j(0);
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (!std::iswspace(s[i]))
			break ;
		j++;
		
	}
	return s.substr(0, s.length() - j);
}

std::string trim(std::string& s)
{
	s = endTrim(s);
	return begTrim(s);
}

void MyPhonebook::searchInContacts()
{
	int i(-1);
	int print(1);

	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
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
		std::string s;
		std::cout << "Select The Contact Index: ";
		std::getline(std::cin, s);
		s = trim(s);
		for (int j = 0; s[j]; j++) {
			if ((s[j] < '0' || s[j] > '9'))
				print = 0;
		}
		int get = std::atoi(s.c_str());
		if ((get >= 0 && get < index)  && s.length() > 0 && print)
			contacts[get].printContactInfos();
		else if (s.length() > 0)
			std::cout << "Error: Contact does not exist." << std::endl;
	}
}