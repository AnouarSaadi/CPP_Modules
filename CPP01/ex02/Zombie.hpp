/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:10:04 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/07 12:50:38 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string _name;
	std::string _type;
public:
	Zombie(std::string const& _argName);
	~Zombie();
	void announce();
	std::string getName();
	std::string getType();
	void setType(std::string const& _argType);
};

#endif