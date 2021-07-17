/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:01:50 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/17 19:32:48 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _n(0)
{
	_ints.reserve(_n);
}

Span::Span(unsigned int N): _n(N)
{
	_ints.reserve(_n);
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
	_ints.clear();
}

Span & Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_n = src._n;
		this->_ints.clear();
		this->_ints.reserve(src._n);
		for(unsigned int i = 0; i < src._ints.size(); i++)
			this->_ints[i] = src._ints[i];
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (this->_ints.size() == this->_n)
		throw Span::NoSpaceToStore();
	this->_ints.push_back(number);
}

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	for (; first != last; first++)
		this->addNumber(*first);
}

const char * Span::NoSpaceToStore::what() const throw()
{
	return "No space to store more numbers.";
}

int Span::shortestSpan()
{
	if (this->_ints.size() <= 1)
		throw Span::NoSpanToFind();
	int diff = INT_MAX;
	std::sort(this->_ints.begin(), this->_ints.end());
	for (unsigned int i = 0; i < this->_ints.size() - 1; i++)
		if (this->_ints[i + 1] - this->_ints[i] < diff)
			diff = this->_ints[i + 1] - this->_ints[i];
	return diff;
}

int Span::longestSpan()
{
	if (this->_ints.size() <= 1)
		throw Span::NoSpanToFind();
	std::sort(this->_ints.begin(), this->_ints.end());
	int diff = this->_ints[this->_n - 1] - this->_ints[0];
	return diff;
}

const char * Span::NoSpanToFind::what() const throw()
{
	return "No span to find.";
}
