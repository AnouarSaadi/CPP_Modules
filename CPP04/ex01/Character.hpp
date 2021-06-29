/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:04:11 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 15:05:30 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Chainsaw.hpp"

# include "Enemy.hpp"
# include "SuperMutant.hpp"
# include "RadScorpion.hpp"
# include "Cyberdemon.hpp"
# include "SpiderMastermind.hpp"

class Character
{
private:
	std::string _name;
	int			_actionPoints;
	AWeapon*	_currentWeapon;
	Character();

public:
	Character(std::string const & name);
	Character(Character const & orig);
	~Character();
	Character & operator=(Character const & orig);
	void recoverAP();
	void equip(AWeapon* wp);
	void attack(Enemy* enemy);
	std::string const & getName() const;
	int & getAPoints();
	AWeapon* getWeapon()  const;
};

std::ostream & operator<<(std::ostream & os, Character & ch);

#endif