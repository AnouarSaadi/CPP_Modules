/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:44:30 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/01 15:54:40 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::getFirstName()
{
	return this->firstName;
}

void Contact::setFirstName(std::string arg)
{
	this->firstName = arg;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

void Contact::setLastName(std::string arg)
{
	this->lastName = arg;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

void Contact::setNickname(std::string arg)
{
	this->nickname = arg;
}

std::string Contact::getLogin()
{
	return this->login;
}

void Contact::setLogin(std::string arg)
{
	this->login = arg;
}

std::string Contact::getPostalAddress()
{
	return this->postalAddress;
}

void Contact::setPostalAddress(std::string arg)
{
	this->postalAddress = arg;
}

std::string Contact::getEmailAddress()
{
	return this->emailAddress;
}

void Contact::setEmailAddress(std::string arg)
{
	this->emailAddress = arg;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

void Contact::setPhoneNumber(std::string arg)
{
	this->phoneNumber = arg;
}

std::string Contact::getBirthdayDate()
{
	return this->birthdayDate;
}

void Contact::setBirthdayDate(std::string arg)
{
	this->birthdayDate = arg;
}

std::string Contact::getFavoriteMeal()
{
	return this->favoriteMeal;
}

void Contact::setFavoriteMeal(std::string arg)
{
	this->favoriteMeal = arg;
}

std::string Contact::getUnderwearColor()
{
	return this->underwearColor;
}

void Contact::setUnderwearColor(std::string arg)
{
	this->underwearColor = arg;
}

std::string Contact::getDarkestSecret()
{
	return this->darkestSecret;
}

void Contact::setDarkestSecret(std::string arg)
{
	this->darkestSecret = arg;
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