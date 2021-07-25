/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:07:54 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:37 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
	std::string _name;
public:
	Victim();
	Victim(std::string const & name);
	Victim(Victim const & orig);
	virtual ~Victim();
	Victim & operator=(Victim const & orig);

	std::string const & getVictimName();
	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & os, Victim & arg);

#endif
