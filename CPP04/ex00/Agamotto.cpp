/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agamotto.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:03:35 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:18:59 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agamotto.hpp"

Agamotto::Agamotto(std::string const & name): Victim(name)
{
	std::cout << "Aga aga aga!" << std::endl;
}

Agamotto::Agamotto(Agamotto const & orig)
{
	*this = orig;
	return ;
}

Agamotto::~Agamotto()
{
	std::cout << "motto motto..." << std::endl;
}

Agamotto & Agamotto::operator=(Agamotto const & orig)
{
	if (this != &orig)
		this->_name = orig._name;
	return *this;
}

void Agamotto::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a gold scorpion!"
		<< std::endl;
}
