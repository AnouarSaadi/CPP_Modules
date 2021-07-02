/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:00:32 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/02 16:06:43 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & orig);
	virtual ~AMateria();
	AMateria & operator=(AMateria const & orig);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif /* AMATERIA_HPP */