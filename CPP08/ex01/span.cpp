/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 18:01:50 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/16 18:52:32 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _arrInts(0), _n(0), _idx(0)
{
}

Span::Span(unsigned int N): _n(N), _idx(0)
{
	_arrInts = new int[N];
	for (int i = 0; i < N; i++)
		_arrInts[i] = 0;
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span()
{
	delete [] _arrInts;
}

Span & Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_n = src._n;
		this->_idx = src._idx;
		if (this->_arrInts)
			delete [] this->_arrInts;
		this->_arrInts = new int[src._n];
		for(int i = 0; i < this->_n; i++)
			this->_arrInts[i] = src._arrInts[i];
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (this->_idx == this->_n)
		throw Span::NoSpaceToStore();
	this->_arrInts[this->_idx++] = number;
}

const char * Span::NoSpaceToStore::what() const throw()
{
	return "No space to store the number.";
}

int Span::shortestSpan()
{
	if (this->_idx <= 1)
		throw Span::NoSpanToFind();
	
}

const char * Span::NoSpanToFind::what() const throw()
{
	return "No span to find.";
}
