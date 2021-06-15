/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:54:14 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/15 13:49:05 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

/* Default constructor */

Fixed::Fixed( void ) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Int constructor */

Fixed::Fixed( const int raw )
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(raw << this->_numbersFracBits);
}

/* Float constructor */

Fixed::Fixed( const float raw )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(raw * (1 << this->_numbersFracBits)));
}

/* Copy constructor */

Fixed::Fixed( Fixed const & fixCl )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixCl;
	return ;
}

/* Destructor */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Assignation operator */

Fixed & Fixed::operator= ( Fixed const & fixCl )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixCl)
		this->setRawBits(fixCl.getRawBits());
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float)this->getRawBits() / (float)(1 << this->_numbersFracBits);
}

int		Fixed::toInt( void ) const
{
	return this->getRawBits() >> this->_numbersFracBits;
}

std::ostream & operator<<( std::ostream & os, Fixed const & fixCl )
{
	os << fixCl.toFloat();
	return os;
}
