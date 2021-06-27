/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:36:53 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/27 15:01:45 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
public:
	Sorcerer();
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & orig);
	~Sorcerer();
	Sorcerer & operator=(Sorcerer const & orig);

	std::string const & getSorcererName();
	std::string const & getSorcererTitle();

	void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream & os, Sorcerer & arg);

#endif