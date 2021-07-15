/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:44:31 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/11 15:08:59 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
	Data *ptr = new Data;
	ptr->_name = "Serialization";
	std::cout << ptr <<  "   \'Data content " << ptr->_name << '\'' << std::endl;
	std::cout << "\nCall \"uintptr_t    serialize(Data* ptr)\"." << std::endl;
	uintptr_t raw = serialize(ptr);
	std::cout << &raw <<  "   \'Raw content " << raw << '\'' << std::endl;
	std::cout << "\nCall \"Data*     deserialize(uintptr_t raw)\"." << std::endl;
	Data *dataRaw = deserialize(raw);
	std::cout << dataRaw <<  "   \'Data content " << dataRaw->_name << '\'' << std::endl;
	delete dataRaw;
	return 0;
}
