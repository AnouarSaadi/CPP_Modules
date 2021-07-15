/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:13:42 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/15 17:19:10 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T *arr, size_t size, void (*func)(T const &))
{
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

#endif