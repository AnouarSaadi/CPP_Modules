/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpiderMastermind.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:54:15 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/29 14:54:49 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPIDERMASTERMIND_HPP
# define SPIDERMASTERMIND_HPP

# include "Enemy.hpp"

class SpiderMastermind: public Enemy
{
public:
	SpiderMastermind();
	SpiderMastermind(SpiderMastermind const & orig);
	virtual ~SpiderMastermind();
	SpiderMastermind & operator=(SpiderMastermind const & orig);
};

#endif