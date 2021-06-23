/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:03:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/23 11:41:07 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	ScavTrap( void );
public:
	ScavTrap( std::string const & name );
	ScavTrap( ScavTrap const & orig );
	~ScavTrap();
	ScavTrap & operator= ( ScavTrap const & orig );

	int attack( std::string const & target );

	void guardGate();
};

#endif