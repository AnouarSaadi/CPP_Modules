/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/21 11:54:19 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
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
	FragTrap( void );
public:
	FragTrap( std::string const & name );
	FragTrap( FragTrap const & copy );
	~FragTrap();
	FragTrap & operator=( FragTrap const & orig );

	int rangedAttack( std::string const & target );
	int meleeAttack( std::string const & target );

	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	int getMeleeAttackDamage();
	int getRangeAttackDamage();

	int vaulthunter_dot_exe( std::string const & target );
	int rocketLauncherAttack( std::string const & target );
	int laserAttack( std::string const & target );
	int shotgunAttack( std::string const & target );
	int pistolAttack( std::string const & target );
	int sniperRifleAttack( std::string const & target );
};

#endif