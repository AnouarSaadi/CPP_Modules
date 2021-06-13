/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:53:24 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/13 20:23:20 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Canonical Form :
	- Default constructor		// className( void );
	- Copy constructor			// className( className const & arg ){ *this = arg; return ; };
	- Destructor				// ~className( void );
	- Copy assignment operator	// ClassName & operator( className const & arg ){ (this != arg) ? this->n = arg.getn(); return *this; };
*/

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_numbersFracBits;
public:
	Fixed(void);
	Fixed(Fixed const & arg);
	~Fixed();
	Fixed & operator= (Fixed const & arg);
};

#endif

/*  
std::stream & operator<<( std::stream & stream, className const & arg );

std::stream & operator<<( std::stream & stream, className const & arg )
{
	
}
*/