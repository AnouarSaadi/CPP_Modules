/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:27:18 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:23:07 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify()
{
	return _brain.identify();
}

const Brain&  Human::getBrain()
{
	return this->_brain;
}
