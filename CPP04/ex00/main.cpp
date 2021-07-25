/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:01:11 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:19:10 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Agamotto bob("Bob");
	Hoggoth jack("Jack");
	std::cout << robert << jim << joe << bob << jack;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);
	robert.polymorph(jack);
	return 0;
}
