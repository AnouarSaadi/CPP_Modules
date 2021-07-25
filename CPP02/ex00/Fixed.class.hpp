/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:53:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:22:09 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_numbersFracBits = 8;
public:
	Fixed( void );
	Fixed( Fixed const & fixCl );
	~Fixed();
	Fixed &	operator= ( Fixed const & fixCl );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif

/**********************************************/
/*                                            */
/*                                            */
/*	Canonical Form                            */
/*                                            */
/*                                            */
/*		- Default constructor                 */
/*                                            */
/* 		- Copy constructor                    */
/*                                            */
/*		- Destructor                          */
/*                                            */
/* 		- Copy assignment operator            */
/*                                            */
/*                                            */
/**********************************************/
