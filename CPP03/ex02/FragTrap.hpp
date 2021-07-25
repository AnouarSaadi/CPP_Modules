/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 11:40:05 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:20:55 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & orig);
	~FragTrap();
	FragTrap operator= (FragTrap const & orig);

	void highFivesGuys(void);
};

#endif
