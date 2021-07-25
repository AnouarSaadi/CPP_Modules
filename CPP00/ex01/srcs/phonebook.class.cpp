/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 12:36:45 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:40 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook() : _index(0)
{
}


std::string trimReplace(std::string& s);

void Phonebook::addNewContact()
{
	if (_index < 8)
	{
		std::string str;
		std::cout << std::endl
				  << "New Contact" << std::endl;
		std::cout << "First Name        : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setFirstName(str);
		std::cout << "Last Name         : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setLastName(str);
		std::cout << "Nickname          : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setNickname(str);
		std::cout << "Login             : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setLogin(str);
		std::cout << "Postal Address    : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setPostalAddress(str);
		std::cout << "Email Address     : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setEmailAddress(str);
		std::cout << "Phone Number      : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setPhoneNumber(str);
		std::cout << "Birthday Date     : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setBirthdayDate(str);
		std::cout << "Favorite Meal     : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setFavoriteMeal(str);
		std::cout << "Underwear Color   : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setUnderwearColor(str);
		std::cout << "Darkest Secret    : ";
		std::getline(std::cin, str);
		str = trimReplace(str);
		_contacts[_index].setDarkestSecret(str);
		std::cout << std::endl;
		std::cout << "Contact No." << _index + 1 << " added." << std::endl;
		_index++;
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

void Phonebook::printContacts(int i)
{

	std::cout << '|';
	std::cout << std::setw(10);
	std::cout << i;
	std::cout << '|';
	printColumn(_contacts[i].getFirstName());
	std::cout << '|';
	printColumn(_contacts[i].getLastName());
	std::cout << '|';
	printColumn(_contacts[i].getNickname());
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

std::string trimReplace(std::string& s)
{
	s = endTrim(s);
	s = begTrim(s);
	std::replace(std::begin(s), std::end(s), '\t', ' ');
	return s;
}

void Phonebook::searchInContacts()
{
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (_index)
		for (int i = 0; i < _index; i++)
			printContacts(i);
	else
		std::cout << "|                   Empty                   |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	if (_index)
	{
		std::cout << "Select The Contact Index: ";
		std::string s;
		std::getline(std::cin, s);
		s = trimReplace(s);
		int print(1);
		for (int j = 0; s[j]; j++) {
			if (!std::isdigit(s[j]))
				print = 0;
		}
		int get = std::atoi(s.c_str());
		if ((get >= 0 && get < _index)  && s.length() > 0 && print)
			_contacts[get].printContactInfos();
		else if (s.length() > 0)
			std::cout << "Error: Contact does not exist." << std::endl;
	}
}
