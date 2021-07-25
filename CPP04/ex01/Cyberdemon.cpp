/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cyberdemon.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:41:06 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:16:29 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cyberdemon.hpp"

Cyberdemon::Cyberdemon(): Enemy(210, "Cyber Demon")
{
	std::cout << "* I AM HUGE *" << std::endl;
}

Cyberdemon::Cyberdemon(Cyberdemon const & orig)
{
	*this = orig;
	return ;
}

Cyberdemon::~Cyberdemon()
{
	std::cout << "* RIP AND TEAR *" << std::endl;
}

Cyberdemon & Cyberdemon::operator=(Cyberdemon const & orig)
{
	if (this != &orig)
	{
		this->_hitPoints = orig._hitPoints;
		this->_type = orig._type;
	}
	return *this;
}
