/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:08:57 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:11:00 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <sstream>
# include <limits>

# define _AVINT 1
# define _AVCHAR 2
# define _AVFLOAT 3
# define _AVDOUBLE 4

class Convert
{
private:
	std::string _av;
	int			_avType;
	int			_avInt;
	char		_avChar;
	float		_avFloat;
	double		_avDouble;
	int			_precision;
	int			_isScientific;

public:
	/* Coplien’s form */
	Convert();
	Convert(std::string const &);
	Convert(Convert const &);
	~Convert();
	Convert & operator=(Convert const &);

	/* Convertion functions */
	void	convertFunc();
	bool	checkForScience();
	void	toInt();
	void	toChar();
	void	toFloat();
	void	toDouble();

	/* Exceptions */
	class ErrorArguments: public std::exception
	{
	public:
		const char * what() const throw();
	};
	class InvalidArgument: public std::exception
	{
	public:
		const char * what() const throw();
	};
};



#endif
