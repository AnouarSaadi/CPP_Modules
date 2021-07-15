/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:09:49 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/13 19:50:21 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

Convert::Convert():
_av(""),
_avType(0),
_avInt(0),
_avChar(0),
_avFloat(0),
_avDouble(0),
_precision(0),
_isScientific(0)
{
}

Convert::Convert(std::string const & av):
_av(av),
_avType(0),
_avInt(0),
_avChar(0),
_avFloat(0),
_avDouble(0),
_precision(0),
_isScientific(0)
{
	if (_av.empty())
		throw Convert::InvalidArgument();
	if (_av.length() == 1)
	{
		if (std::isprint(_av[0]))
			_avType = _AVCHAR;
		if (std::isdigit(av[0]))
			_avType = _AVINT;
	}
	if (_av.length() > 1)
	{
		if (checkForScience())
			return ;
		size_t i = (_av[0] == '-' || _av[0] == '+') ? 1 : 0;
		if (av[i] == '.')
			throw Convert::InvalidArgument();
		if (_av[_av.length() - 1] == 'f')
		{
			_avType = _AVFLOAT;
			_av = _av.substr(0, _av.length() - 1);
		}
		int points = 0;
		for (;i < _av.length(); i++)
		{
			if (points)
				_precision++;
			if (_av[i] == '.')
			{
				if (!_avType)
					_avType = _AVDOUBLE;
				points++;
			}
			if ((!isdigit(_av[i])  && _av[i] != '.' )|| points > 1)
				throw Convert::InvalidArgument();
		}
		if (!_avType)
			_avType = _AVINT;
	}
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return ;
}

Convert::~Convert()
{
}

Convert & Convert::operator=(Convert const &src)
{
	if (this != &src)
	{
		this->_av = src._av;
		this->_avType = src._avType;
		this->_avChar = src._avChar;
		this->_avInt = src._avInt;
		this->_avFloat = src._avFloat;
		this->_avDouble = src._avDouble;
		this->_isScientific = src._isScientific;
		this->_precision = src._precision;
	}
	return *this;
}

const char * Convert::ErrorArguments::what() const throw()
{
	return "Wrong number of arguments";
}

const char * Convert::InvalidArgument::what() const throw()
{
	return "Invalid argument";
}

bool Convert::checkForScience()
{
	if (_av == "inff" || _av == "-inff" || _av == "+inff" || _av == "nanf")
	{
		_isScientific = 1;
		_avType = _AVFLOAT;
		return true;
	}
	if (_av == "inf" || _av == "-inf" || _av == "+inf" || _av == "nan")
	{
		_isScientific = 1;
		_avType = _AVDOUBLE;
		return true;
	}
	return false;
}


void Convert::toChar()
{
	std::cout << "char: ";
	if (_isScientific)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	switch (this->_avType)
	{
		case _AVINT:
			_avChar = static_cast<char>(_avInt);
			break;
		case _AVCHAR:
			_avChar = static_cast<char>(_avChar);
			break;
		case _AVFLOAT:
			_avChar = static_cast<char>(_avFloat);
			break;
		case _AVDOUBLE:
			_avChar = static_cast<char>(_avDouble);
			break;
	}
	if (!(static_cast<unsigned int>(_avChar) >= 0  && static_cast<unsigned int>(_avChar) <= 127))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	if (!std::isprint(_avChar))
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	std::cout << '\'' << _avChar << '\'' << std::endl;
}

void Convert::toInt()
{
	std::cout << "int: ";
	if (_isScientific)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	switch (this->_avType)
	{
		case _AVINT:
			_avInt = static_cast<int>(_avInt);
			break;
		case _AVCHAR:
			_avInt = static_cast<int>(_avChar);
			break;
		case _AVFLOAT:
			_avInt = static_cast<int>(_avFloat);
			break;
		case _AVDOUBLE:
			_avInt = static_cast<int>(_avDouble);
			break;
	}
	std::cout << _avInt << std::endl;
}

void Convert::toFloat()
{
	std::cout << "float: ";
	switch (this->_avType)
	{
		case _AVINT:
			_avFloat = static_cast<float>(_avInt);
			break;
		case _AVCHAR:
			_avFloat = static_cast<float>(_avChar);
			break;
		case _AVFLOAT:
			_avFloat = static_cast<float>(_avFloat);
			break;
		case _AVDOUBLE:
			_avFloat = static_cast<float>(_avDouble);
			break;
	}
	(_precision > 0 || _isScientific) ? std::cout << _avFloat : std::cout << _avFloat << ".0";

	std::cout << 'f' << std::endl;
}

void Convert::toDouble()
{
	std::cout << "double: ";
	switch (this->_avType)
	{
		case _AVINT:
			_avDouble = static_cast<double>(_avInt);
			break;
		case _AVCHAR:
			_avDouble = static_cast<double>(_avChar);
			break;
		case _AVFLOAT:
			_avDouble = static_cast<double>(_avFloat);
			break;
		case _AVDOUBLE:
			_avDouble = static_cast<double>(_avDouble);
			break;
	}
	(_precision > 0 || _isScientific) ? std::cout << _avDouble : std::cout << _avDouble << ".0";
	std::cout << std::endl;
}

void Convert::convertFunc()
{
	switch(this->_avType)
	{
		case _AVINT:
			_avInt = std::stoi(_av);
			break;
		case _AVCHAR:
			_avChar = _av.at(0);
			break;
		case _AVFLOAT:
			_avFloat = std::stof(_av);
			break;
		case _AVDOUBLE:
			_avDouble = std::stod(_av);
			break;
	}
	toChar();
	toInt();
	toFloat();
	toDouble();
}