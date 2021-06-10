/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:35:58 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/10 11:47:40 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void pointerToStr(std::string* str)
{
	std::cout << "Pointer   : " << *str << std::endl;
}

void referenceToStr(std::string& str)
{
	std::cout << "Reference : " << str << std::endl;
}

int main()
{
	std::string str("HI THIS IS BRAIN");
	pointerToStr(&str);
	referenceToStr(str);
	return 0;
}