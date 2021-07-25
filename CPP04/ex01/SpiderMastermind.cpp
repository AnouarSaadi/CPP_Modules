/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpiderMastermind.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:54:55 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:16:56 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpiderMastermind.hpp"

SpiderMastermind::SpiderMastermind(): Enemy(190, "Spider Mastermind")
{
	std::cout << "* I AM SPIDER *" << std::endl;
}

SpiderMastermind::SpiderMastermind(SpiderMastermind const & orig)
{
	*this = orig;
	return ;
}

SpiderMastermind::~SpiderMastermind()
{
	std::cout << "* Na na na na *" << std::endl;
}

SpiderMastermind & SpiderMastermind::operator=(SpiderMastermind const & orig)
{
	if (this != &orig)
	{
		this->_hitPoints = orig._hitPoints;
		this->_type = orig._type;
	}
	return *this;
}
