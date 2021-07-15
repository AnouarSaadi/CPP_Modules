/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:05:12 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/11 17:20:44 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>

class Base
{
public:
	virtual ~Base(){};
};

class A: public Base
{};

class B: public Base
{};

class C: public Base
{};

#endif