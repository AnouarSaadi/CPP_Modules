/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 11:54:14 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/13 20:28:28 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & arg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = arg;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator= (Fixed const & arg)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &arg)
		this->_fixedPointValue = arg._fixedPointValue;
	return *this;
}