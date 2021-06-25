/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:35:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/25 16:13:29 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	ClapTrap( void );
public:
	ClapTrap( std::string const & name );
	ClapTrap( ClapTrap const & copy );
	~ClapTrap();
	ClapTrap & operator=( ClapTrap const & orig );

	int attack( std::string const & target );

	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

	int getAttackDamage();
};

#endif