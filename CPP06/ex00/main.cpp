/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:36:48 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/11 15:08:48 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char const *argv[])
{
	try
	{
		if (argc != 2)
			throw Convert::ErrorArguments();
		Convert c(argv[1]);
		c.convertFunc();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return -1;
	}
	return 0;
}