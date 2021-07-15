/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:53:41 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/11 16:18:58 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes.hpp"

Base * generate(void)
{
	Base *ret;
	std::cout << "Instantiation___ " << std::endl;
	srand(clock());
	int ran = rand() % 3;
	switch(ran)
	{
		case 0:
			std::cout << "     Generate a Base with \'A\' Class." << std::endl;
			ret = new A;
			break;
		case 1:
			std::cout << "     Generate a Base with \'B\' Class." << std::endl;
			ret = new B;
			break;
		default:
			std::cout << "     Generate a Base with \'C\' Class." << std::endl;
			ret = new C;
			break;
	}
	return ret;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a == NULL)
		std::cout << "The conversion to A has been failed." << std::endl;
	else
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b == NULL)
		std::cout << "The conversion to B has been failed." << std::endl;
	else
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c == NULL)
		std::cout << "The conversion to C has been failed." << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	Base *p;
	std::cout << "Call: \"Base * generate(void)\"\n" << std::endl;
	p = generate();
	std::cout << "\nCall: \"void identify(Base* p)\"\n" << std::endl;
	identify(p);
	std::cout << "\nCall: \"void identify(Base& p)\"\n" << std::endl;
	identify(*p);
	delete p;
	return 0;
}
