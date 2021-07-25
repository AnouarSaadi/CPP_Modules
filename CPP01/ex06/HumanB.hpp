/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:07:53 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:22:52 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAMB_HPP
# define HUMAMB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string _argName);
	~HumanB();
	void setWeapon(Weapon& _argWeapon);
	void attack();
};

#endif