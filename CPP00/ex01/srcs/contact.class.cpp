/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:44:30 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:46 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

std::string Contact::getFirstName()
{
	return this->_firstName;
}

void Contact::setFirstName(std::string arg)
{
	this->_firstName = arg;
}

std::string Contact::getLastName()
{
	return this->_lastName;
}

void Contact::setLastName(std::string arg)
{
	this->_lastName = arg;
}

std::string Contact::getNickname()
{
	return this->_nickname;
}

void Contact::setNickname(std::string arg)
{
	this->_nickname = arg;
}

std::string Contact::getLogin()
{
	return this->_login;
}

void Contact::setLogin(std::string arg)
{
	this->_login = arg;
}

std::string Contact::getPostalAddress()
{
	return this->_postalAddress;
}

void Contact::setPostalAddress(std::string arg)
{
	this->_postalAddress = arg;
}

std::string Contact::getEmailAddress()
{
	return this->_emailAddress;
}

void Contact::setEmailAddress(std::string arg)
{
	this->_emailAddress = arg;
}

std::string Contact::getPhoneNumber()
{
	return this->_phoneNumber;
}

void Contact::setPhoneNumber(std::string arg)
{
	this->_phoneNumber = arg;
}

std::string Contact::getBirthdayDate()
{
	return this->_birthdayDate;
}

void Contact::setBirthdayDate(std::string arg)
{
	this->_birthdayDate = arg;
}

std::string Contact::getFavoriteMeal()
{
	return this->_favoriteMeal;
}

void Contact::setFavoriteMeal(std::string arg)
{
	this->_favoriteMeal = arg;
}

std::string Contact::getUnderwearColor()
{
	return this->_underwearColor;
}

void Contact::setUnderwearColor(std::string arg)
{
	this->_underwearColor = arg;
}

std::string Contact::getDarkestSecret()
{
	return this->_darkestSecret;
}

void Contact::setDarkestSecret(std::string arg)
{
	this->_darkestSecret = arg;
}

void	Contact::printContactInfos()
{
	std::cout << std::endl << "Contact Informations" << std::endl;
	std::cout << "First Name        : ";
	std::cout << this->getFirstName() << std::endl;
	std::cout << "Last Name         : ";
	std::cout << this->getLastName() << std::endl;
	std::cout << "Nickname          : ";
	std::cout << this->getNickname() << std::endl;
	std::cout << "Login             : ";
	std::cout << this->getLogin() << std::endl;
	std::cout << "Postal Address    : ";
	std::cout << this->getPostalAddress() << std::endl;
	std::cout << "Email Address     : ";
	std::cout << this->getEmailAddress() << std::endl;
	std::cout << "Phone Number      : ";
	std::cout << this->getPhoneNumber() << std::endl;
	std::cout << "Birthday Date     : ";
	std::cout << this->getBirthdayDate() << std::endl;
	std::cout << "Favorite Meal     : ";
	std::cout << this->getFavoriteMeal() << std::endl;
	std::cout << "Underwear Color   : ";
	std::cout << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest Secret    : ";
	std::cout << this->getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
