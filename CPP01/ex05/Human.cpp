/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:27:18 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/09 11:24:53 by asaadi           ###   ########.fr       */
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
