/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:53:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/15 13:42:35 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_numbersFracBits = 8;
public:
	Fixed( void );
	Fixed( const int raw );
	Fixed( const float raw );
	Fixed( Fixed const & fixCl );
	~Fixed();
	Fixed &	operator= ( Fixed const & raw );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & stream, Fixed const & arg );

#endif
