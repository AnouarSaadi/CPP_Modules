/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hoggoth.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:29:58 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:05 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Hoggoth.hpp"

Hoggoth::Hoggoth(std::string const & name): Victim(name)
{
	std::cout << "Hogg hogg!" << std::endl;
}

Hoggoth::Hoggoth(Hoggoth const & orig)
{
	*this = orig;
	return ;
}

Hoggoth::~Hoggoth()
{
	std::cout << "Bye hogg..." << std::endl;
}

Hoggoth & Hoggoth::operator=(Hoggoth const & orig)
{
	if (this != &orig)
		this->_name = orig._name;
	return *this;
}

void Hoggoth::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a green horse!"
		<< std::endl;
}
