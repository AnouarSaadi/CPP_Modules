/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:11:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:23:03 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::string sRet;
	std::stringstream getAdd;
	getAdd << this;
	getAdd >> sRet;
	for (size_t i = 2; i < sRet.length(); i++)
			sRet[i] = std::toupper(sRet[i]);
	return sRet;
}
