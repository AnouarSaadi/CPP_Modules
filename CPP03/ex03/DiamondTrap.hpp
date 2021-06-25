/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:44:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/25 17:17:16 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string const & name);
	DiamondTrap(DiamondTrap const & orig);
	~DiamondTrap();
	int attack(std::string const & target);
	DiamondTrap & operator= (DiamondTrap const & orig);

	void whoAmI();
	
};

#endif
