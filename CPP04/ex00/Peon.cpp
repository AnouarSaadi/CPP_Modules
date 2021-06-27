/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:49:18 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/27 15:36:11 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const & name): Victim(name)
{
	std::cout <<  "Zog zog." << std::endl;
}

Peon::Peon(Peon const & orig)
{
	*this = orig;
	return ;
}

Peon::~Peon()
{	
	std::cout <<  "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & orig)
{
	if (this != &orig)
		this->_name = orig._name;
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!"
		<< std::endl;
}
