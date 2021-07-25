/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:31 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cwctype>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
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
