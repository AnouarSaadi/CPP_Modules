/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:57:22 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/11 14:34:39 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data*		deserialize(uintptr_t raw)
{
	Data *ret = reinterpret_cast<Data*>(raw);
	return ret;
}
