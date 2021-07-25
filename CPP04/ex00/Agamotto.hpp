/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Agamotto.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:03:42 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:01 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGAMOTTO_HPP
# define AGAMOTTO_HPP

# include "Victim.hpp"

class Agamotto : public Victim
{
public:
	Agamotto();
	Agamotto(std::string const & name);
	Agamotto(Agamotto const & orig);
	virtual ~Agamotto();
	Agamotto & operator=(Agamotto const & orig);

	void getPolymorphed() const;
};

#endif
