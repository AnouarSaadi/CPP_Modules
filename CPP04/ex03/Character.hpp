/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:04:55 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/04 15:33:33 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string _name;
	AMateria	**_materia;
	int			_numberOfMateria;
	void destroyMaterias();

public:
	Character();
	Character(std::string const & name);
	Character(Character const & orig);
	~Character();
	Character & operator=(Character const & orig);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif