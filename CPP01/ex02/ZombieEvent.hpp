/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:58:45 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/11 17:27:06 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string _argType);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump();
};

#endif