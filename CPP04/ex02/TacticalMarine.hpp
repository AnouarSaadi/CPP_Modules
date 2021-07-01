/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:39:20 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/01 16:33:41 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & orig);
	~TacticalMarine();
	TacticalMarine & operator=(TacticalMarine const & orig);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif