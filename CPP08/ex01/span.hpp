/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 17:54:27 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:09:05 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int>	_ints;
	unsigned int		_n;
	Span();

public:
	Span(unsigned int N);
	Span(Span const &);
	~Span();
	Span& operator=(Span const &);
	
	void addNumber(int);
	void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
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
