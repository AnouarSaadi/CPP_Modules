/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/01 17:50:17 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PHONEBOOK_HPP
# define MY_PHONEBOOK_HPP

# include "contact.hpp"

class MyPhonebook
{
private:
	Contact contacts[8];
	int		index;
public:
	void	addNewContact();
	void	searchInContacts();
	void	printContacts(int i);
	MyPhonebook();
};


#endif