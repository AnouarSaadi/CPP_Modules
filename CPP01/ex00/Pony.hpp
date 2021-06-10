/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 14:38:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 11:29:55 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
private:
	std::string _name;
	std::string _color;
public:
	Pony(std::string, std::string );
	~Pony();
	std::string getNamePony();
	std::string getColorPony();
};

#endif