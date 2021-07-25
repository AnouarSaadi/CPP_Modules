/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:54:07 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:34 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "contact.class.hpp"

class Phonebook
{
private:
	Contact _contacts[8];
	int		_index;
public:
	void	addNewContact();
	void	searchInContacts();
	void	printContacts(int i);
	Phonebook();
};

#endif
