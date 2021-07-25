/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:16:03 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:23 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
void easyfind(T const & cont, const int & toFind)
{
	if (std::find(cont.begin(), cont.end(), toFind) == cont.end())
		throw "The occurrence has not been found";
	std::cout << "The occurrence of \'"<< toFind << "\' has been found" << std::endl;
}

#endif
