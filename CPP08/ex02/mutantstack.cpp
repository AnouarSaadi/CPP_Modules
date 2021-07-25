/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:22:47 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:08:56 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
MutantStack<T>  & MutantStack<T>::operator=(MutantStack<T> const &src)
{
	if (this != &src)
		this->std::stack<T>::operator=(src);
	return *this;
}

