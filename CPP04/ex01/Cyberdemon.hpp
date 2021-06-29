/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cyberdemon.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:40:14 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 14:40:55 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CYBERDEMON_HPP
# define CYBERDEMON_HPP

# include "Enemy.hpp"

class Cyberdemon: public Enemy
{
public:
	Cyberdemon();
	Cyberdemon(Cyberdemon const & orig);
	virtual ~Cyberdemon();
	Cyberdemon & operator=(Cyberdemon const & orig);
};

#endif