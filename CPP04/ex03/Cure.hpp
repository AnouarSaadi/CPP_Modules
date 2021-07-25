/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 09:05:01 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:15:03 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const & orig);
	virtual ~Cure();
	Cure & operator=(Cure const & orig);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
