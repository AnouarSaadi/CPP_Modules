/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:17:21 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:51 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printContent(int const &con_)
{
	std::cout << con_ << std::endl;
}

void printContentS(std::string const &con_)
{
	std::cout << con_ << std::endl;
}

void printContentD(double const &con_)
{
	std::cout << con_ << std::endl;
}

int main()
{
	int size = 5;
	std::cout << "Test N.1: test with an int array" << std::endl;
	int *arr = new int[size];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	iter(arr, size, printContent);
	delete [] arr;

	std::cout << "\nTest N.2: test with a std::string array" << std::endl;
	std::string *arr_s = new std::string[size];
	arr_s[0] = "hello";
	arr_s[1] = "!";
	arr_s[2] = "World";
	arr_s[3] = "dlroW";
	arr_s[4] = "olleh";
	iter(arr_s, size, printContentS);
	delete [] arr_s;

	std::cout << "\nTest N.3: test with a double array" << std::endl;

	double *arr_d = new double[size];
	arr_d[0] = 0.008;
	arr_d[1] = 1.25;
	arr_d[2] = 25.0101010;
	arr_d[3] = 3.8;
	arr_d[4] = 3.141509;
	iter(arr_d, size, printContentD);
	delete [] arr_d;
	return 0;
}

