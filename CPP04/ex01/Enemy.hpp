/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:25:26 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/04 11:44:36 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:
	int			_hitPoints;
	std::string _type;

public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & orig);
	virtual ~Enemy();
	Enemy & operator=(Enemy const & orig);
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int amount);
};

#endif