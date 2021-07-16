/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:54:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/16 18:50:06 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

class Span
{
private:
	int *_arrInts;
	int _n;
	int _idx;
	Span();

public:
	Span(unsigned int N);
	Span(Span const &);
	~Span();
	Span& operator=(Span const &);
	
	void addNumber(int);
	class NoSpaceToStore : public std::exception
	{
	public:
		const char * what() const throw();
	};


	int shortestSpan();
	int longestSpan();
	class NoSpanToFind : public std::exception
	{
	public:
		const char * what() const throw();
	};

};

#endif