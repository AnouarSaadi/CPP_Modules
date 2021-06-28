/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hoggoth.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:28:37 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/28 15:02:19 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOGGOTH_HPP
# define HOGGOTH_HPP

# include "Victim.hpp"

class Hoggoth : public Victim
{
public:
	Hoggoth();
	Hoggoth(std::string const & name);
	Hoggoth(Hoggoth const & orig);
	virtual ~Hoggoth();
	Hoggoth & operator=(Hoggoth const & orig);

	void getPolymorphed() const;
};

#endif