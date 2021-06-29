/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chainsaw.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:01:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 15:02:14 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINSAW_HPP
# define CHAINSAW_HPP

# include "AWeapon.hpp"

class Chainsaw : public AWeapon
{
public:
	Chainsaw();
	Chainsaw(Chainsaw const & orig);
	virtual ~Chainsaw();
	Chainsaw & operator=(Chainsaw const & orig);

	void attack() const;
};

#endif