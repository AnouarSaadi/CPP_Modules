/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:33:59 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/15 18:00:29 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP 1

# include <iostream>

template<typename T>

class Array
{
private:
	T			*_arr;
	unsigned int _n;

public:
	Array<T>(): _n(0)
	{
		_arr = new T[0];
	}

	Array<T>(unsigned int n): _n(n)
	{
		_arr = new T[n];
		for (unsigned int i = 0; i < _n; ++i)
			_arr[i] = T();
	}

	Array<T>(Array<T> const & src){ *this = src; }

	Array<T> & operator=(Array<T> const & src)
	{
		if (this != &src)
		{
			this->_arr = new T[src._n];
			this->_n = src._n;
			for (unsigned int i = 0; i < this->_n; i++)
				this->_arr[i] = src._arr[i];
		}
		return *this;
	}

	~Array<T>()
	{
		delete [] _arr;
	}

	T & operator[](unsigned int idx)
	{
		if (!(idx >= 0 && idx < this->_n))
			throw OutOfLimits();
		return this->_arr[idx];
	}

	T const & operator[](unsigned int idx) const
	{
		if (!(idx >= 0 && idx < this->_n))
			throw OutOfLimits();
		return this->_arr[idx];
	}

	class OutOfLimits: public std::exception
	{
	public:
		const char * what() const throw()
		{
			return "The element is out of limits.";
		}
	};

	unsigned int size(){ return this->_n; }
};

#endif