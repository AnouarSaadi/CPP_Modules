/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:38:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:24:14 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string argName, std::string argCol): _name(argName), _color(argCol)
{
	std::cout	<< _name
				<< ": a Pony was born."
				<< std::endl;
}

Pony::~Pony()
{
	std::cout	<< _name
				<< ": a Pony died."
				<< std::endl;
}

std::string Pony::getNamePony()
{
	return this->_name;
}

std::string Pony::getColorPony()
{
	return this->_color;
}
