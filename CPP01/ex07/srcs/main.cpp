/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:48:22 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/09 18:32:48 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char const *argv[])
{
	Replace _data;
	
	if (!_data.parsArgs(argc, argv) || !_data.replaceFunc())
		return (1);
	return 0;
}
