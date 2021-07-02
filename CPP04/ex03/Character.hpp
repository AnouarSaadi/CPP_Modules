/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:04:55 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/02 15:43:25 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string _name;
public:
	Character(/* args */);
	Character(std::string const & name);
	Character(Character const & orig);
	~Character();
	Character & operator=(Character const & orig);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
};


#endif