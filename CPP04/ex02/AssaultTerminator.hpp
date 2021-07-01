/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:38:08 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/01 16:36:09 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & orig);
	~AssaultTerminator();
	AssaultTerminator & operator=(AssaultTerminator const & orig);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif