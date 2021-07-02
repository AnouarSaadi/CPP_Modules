/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:42:01 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/02 10:58:20 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & orig)
{
	*this = orig;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout <<  "Aaargh..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & orig)
{
	(void)orig;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine* ret = new TacticalMarine;
	*ret = *this;
	return ret;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}