/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:17:30 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/01 16:33:14 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include "AssaultTerminator.hpp"
# include "TacticalMarine.hpp"

typedef struct s_list
{
	ISpaceMarine	*unit;
	struct s_list	*next;
} t_list;

class Squad : public ISquad
{
private:
	t_list *_units;
	
public:
	Squad();
	Squad(Squad const & orig);
	virtual ~Squad();
	Squad & operator=(Squad const & orig);
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);

	void	clearing_squad();
};

#endif