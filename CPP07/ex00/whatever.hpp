/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:40:06 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/15 17:07:12 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void		swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const & 	min(const T &x, const T &y) { return x < y ? x : y; }

template <typename T>
T const & 	max(const T &x, const T &y) { return x > y ? x : y; }

#endif
