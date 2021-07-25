/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:24:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:00 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "Test N.01: test with MutantStack" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "The top element of the stack: "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "The size of the stack: "<< mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(13);
	mstack.push(1337);
	mstack.push(37);
	mstack.push(42);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "\nTest N.02: test with std::list" << std::endl;
	{
	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "The top element of the stack: "<< mstack.back() << std::endl;
	mstack.pop_back();
	std::cout << "The size of the stack: "<< mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(13);
	mstack.push_back(1337);
	mstack.push_back(37);
	mstack.push_back(42);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
	}
	return 0;
}
