/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:03:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/24 14:32:21 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & orig);
	~ScavTrap();
	ScavTrap & operator= (ScavTrap const & orig);

	int attack(std::string const & target);

	void guardGate();
};

#endif
