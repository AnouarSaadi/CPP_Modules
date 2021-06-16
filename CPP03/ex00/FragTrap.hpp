/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/16 17:20:12 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{
private:
	int hitPoints; // 100
	int maxHitPoints; // 100
	int energyPoints; // 100
	int maxEnergyPoints; // 100
	int Level; // 1
	std::string name; //(Parameter of constructor)
	int meleeAttackDamage; // 30
	int rangedAttackDamage; // 20
	int armorDamageReduction;  // 5
public:
	FragTrap(/* args */);
	~FragTrap();
};

#endif