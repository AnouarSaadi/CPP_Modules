/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:52:44 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/15 18:44:54 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}


// int main()
// {
// 	std::cout << "Test N.01: Integers array." << std::endl;
// 	Array<int> integer(10);
// 	int val;
// 	std::cout << "Array size: " << integer.size() << std::endl;
// 	try
// 	{
// 		for (size_t i = 0; i < integer.size(); i++)
// 			std::cout << "The content of a case [" << i << "]: {" << integer[i] << '}' << std::endl;
// 		for (size_t i = 0; i < integer.size(); i++)
// 			integer[i] = i + 100;
// 		for (size_t i = 0; i < integer.size() + 1; i++)
// 		{
// 			val = integer[i];
// 			std::cout << "Array case ["<< i << "] = {"<< val << '}' <<std::endl;
// 		}
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	std::cout << "Test N.02: Strings array." << std::endl;
// 	Array<std::string> str(3);
// 	std::string s;
// 	std::cout << "Array size: " << str.size() << std::endl;
// 	try
// 	{
// 		for (size_t i = 0; i < str.size(); i++)
// 			std::cout << "The content of a case [" << i << "]: {" << str[i] << '}' << std::endl;
// 			str[0] = "Hello_";
// 			str[1] = "World";
// 			str[2] = "!";
// 		for (size_t i = 0; i < str.size(); i++)
// 		{
// 			s = str[i];
// 			std::cout << "Array case ["<< i << "] = {"<< s << '}' <<std::endl;
// 		}
// 		std::cout << "Trying to write in a case under 0: " << std::endl;
// 		str[-8] = "hihi";
// 	}
// 	catch (std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	std::cout << "Test N.03: Empty interger array." << std::endl;
// 	Array<int> emptyInt;
// 	std::cout << "Array size: " << emptyInt.size() << std::endl;

// 	return 0;
// }