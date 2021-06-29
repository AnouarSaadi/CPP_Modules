/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:14:49 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 13:32:17 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
protected:
	std::string _name;
	int			_apCostPoints;
	int			_damagePoints;
	AWeapon(); /* Coplien form */
	
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & orig);
	virtual ~AWeapon();
	AWeapon & operator=(AWeapon const & orig);
	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif