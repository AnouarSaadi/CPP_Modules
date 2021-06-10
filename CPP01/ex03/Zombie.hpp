/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:33:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 11:45:09 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
private:
	std::string _name;
	std::string _type;
public:
	Zombie();
	Zombie(std::string _argName);
	~Zombie();
	void announce();
	std::string getName();
	std::string getType();
	void setType(std::string _argType);
};

#endif