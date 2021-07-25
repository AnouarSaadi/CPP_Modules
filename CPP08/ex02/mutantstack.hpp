/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:21:18 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:08:52 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack<T>() : std::stack<T>(){};
	MutantStack<T>(MutantStack<T> const & src){ *this = src; };
	~MutantStack<T>(){};
	MutantStack<T>  & operator=(MutantStack<T> const &);
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin(){ return std::stack<T>::c.begin(); }
	iterator end(){ return std::stack<T>::c.end(); } 
};

#endif

