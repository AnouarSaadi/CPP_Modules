/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:20:43 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:14:56 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "./AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const & orig);
	virtual ~Ice();
	Ice & operator=(Ice const & orig);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
