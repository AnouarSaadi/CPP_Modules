/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:37:46 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 15:42:42 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class ISquad
{
public:
	ISquad();
	ISquad(ISquad const & orig);
	virtual ~ISquad() {}
	ISquad & operator=(ISquad const & orig);
	virtual int getCount() const = 0;
	// virtual ISpaceMarine* getUnit(int) const = 0;
	// virtual int push(ISpaceMarine*) = 0;
};

#endif