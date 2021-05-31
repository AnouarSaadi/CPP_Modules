/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/05/31 19:41:29 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MY_PHONEBOOK_HPP
# define MY_PHONEBOOK_HPP

# include <string>

# include <iostream>


class Contact
{
	private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
	public:	
	std::string getFirstName()
	{
		return this->firstName;
	}
	void setFirstName(std::string arg)
	{
		this->firstName = arg;
	}

	std::string getLastName()
	{
		return this->lastName;
	}
	void setLastName(std::string arg)
	{
		this->lastName = arg;
	}
	
	std::string getNickname()
	{
		return this->nickname;
	}
	void setNickname(std::string arg)
	{
		this->nickname = arg;
	}
	
	std::string getLogin()
	{
		return this->login;
	}
	void setLogin(std::string arg)
	{
		this->login = arg;
	}
	
	std::string getPostalAddress()
	{
		return this->postalAddress;
	}
	void setPostalAddress(std::string arg)
	{
		this->postalAddress = arg;
	}

	std::string getEmailAddress()
	{
		return this->emailAddress;
	}
	void setEmailAddress(std::string arg)
	{
		this->emailAddress = arg;
	}

	std::string getPhoneNumber()
	{
		return this->phoneNumber;
	}
	void setPhoneNumber(std::string arg)
	{
		this->phoneNumber = arg;
	}

	std::string getBirthdayDate()
	{
		return this->birthdayDate;
	}
	void setBirthdayDate(std::string arg)
	{
		this->birthdayDate = arg;
	}

	std::string getFavoriteMeal()
	{
		return this->favoriteMeal;
	}
	void setFavoriteMeal(std::string arg)
	{
		this->favoriteMeal = arg;
	}

	std::string getUnderwearColor()
	{
		return this->underwearColor;
	}
	void setUnderwearColor(std::string arg)
	{
		this->underwearColor = arg;
	}

	std::string getDarkestSecret()
	{
		return this->darkestSecret;
	}
	void setDarkestSecret(std::string arg)
	{
		this->darkestSecret = arg;
	}
};

#endif