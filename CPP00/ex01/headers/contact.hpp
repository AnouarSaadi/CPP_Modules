/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/04 15:06:33 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cwctype>

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
	std::string getFirstName();
	void setFirstName(std::string arg);

	std::string getLastName();
	void setLastName(std::string arg);
	
	std::string getNickname();
	void setNickname(std::string arg);
	
	std::string getLogin();
	void setLogin(std::string arg);
	
	std::string getPostalAddress();
	void setPostalAddress(std::string arg);

	std::string getEmailAddress();
	void setEmailAddress(std::string arg);

	std::string getPhoneNumber();
	void setPhoneNumber(std::string arg);

	std::string getBirthdayDate();
	void setBirthdayDate(std::string arg);

	std::string getFavoriteMeal();
	void setFavoriteMeal(std::string arg);

	std::string getUnderwearColor();
	void setUnderwearColor(std::string arg);

	std::string getDarkestSecret();
	void setDarkestSecret(std::string arg);

	void	printContactInfos();
};

#endif