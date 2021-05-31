/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:20:53 by asaadi            #+#    #+#             */
/*   Updated: 2021/05/31 20:20:57 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

int main()
{
	std::string str;
	Contact contact[8];
	int index = 0;

	while (1)
	{	
		std::cout << "Command:	";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			std::cout << "First Name        : ";
			std::getline(std::cin, str);
			contact[index].getFirstName();
			contact[index].setFirstName(str);
			std::cout << "Last Name         : ";
			std::getline(std::cin, str);
			contact[index].getLastName();
			contact[index].setLastName(str);
			std::cout << "Nickname          : ";
			std::getline(std::cin, str);
			contact[index].getNickname();
			contact[index].setNickname(str);
			std::cout << "Login             : ";
			std::getline(std::cin, str);
			contact[index].getLogin();
			contact[index].setLogin(str);
			std::cout << "Postal Address    : ";
			std::getline(std::cin, str);
			contact[index].getPostalAddress();
			contact[index].setPostalAddress(str);
			std::cout << "Email Address     : ";
			std::getline(std::cin, str);
			contact[index].getEmailAddress();
			contact[index].setEmailAddress(str);
			std::cout << "Phone Number      : ";
			std::getline(std::cin, str);
			contact[index].getPhoneNumber();
			contact[index].setPhoneNumber(str);
			std::cout << "Birthday Date     : ";
			std::getline(std::cin, str);
			contact[index].getBirthdayDate();
			contact[index].setBirthdayDate(str);
			std::cout << "Favorite Meal     : ";
			std::getline(std::cin, str);
			contact[index].getFavoriteMeal();
			contact[index].setFavoriteMeal(str);
			std::cout << "Underwear Color   : ";
			std::getline(std::cin, str);
			contact[index].getUnderwearColor();
			contact[index].setUnderwearColor(str);
			std::cout << "Darkest Secret    : ";
			std::getline(std::cin, str);
			contact[index].getDarkestSecret();
			contact[index].setDarkestSecret(str);
			index++;
		}
		else if (str == "SEARCH")
		{
			// display all the contact
		}
		else if (str == "EXIT")
		{
			// exit the program
		}
	} 
	return 0;
}