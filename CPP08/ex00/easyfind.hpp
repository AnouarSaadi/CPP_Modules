/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:16:03 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/16 17:01:46 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
void easyfind(T const & cont, const int & toFind)
{
	if (std::find(cont.begin(), cont.end(), toFind) == cont.end())
		throw "The occurrence has not been found";
	std::cout << "The occurrence of \'"<< toFind << "\' has been found" << std::endl;
}

#endif