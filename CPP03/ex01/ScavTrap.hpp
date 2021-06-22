/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:03:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/21 14:50:03 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
	ScavTrap( void );
public:
	ScavTrap( std::string const & name);
	ScavTrap( ScavTrap const & copy);
	~ScavTrap();
	ScavTrap & operator= ( ScavTrap const & orig );
	int rangedAttack( std::string const & target );
	int meleeAttack( std::string const & target );

	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	int getMeleeAttackDamage();
	int getRangeAttackDamage();

	void challengeNewcomer();
	void sniperKillChallenges();
	void humanKillChallenges();
	void fireKillChallenges();
	void explosiveKillChallenges();
	void duelChallenges();

};

#endif

// Willhelm
// RedBelly
// Jack
// Nisha