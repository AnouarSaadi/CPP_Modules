/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:47:40 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:25 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon: public Victim
{
public:
	Peon();
	Peon(std::string const & name);
	Peon(Peon const & orig);
	virtual ~Peon();
	Peon & operator=(Peon const & orig);

	void getPolymorphed() const;
};

#endif
