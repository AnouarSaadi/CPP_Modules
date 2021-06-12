/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:37:10 by asaadi            #+#    #+#             */
/*   Updated: 2021/06/11 16:51:59 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Replace.hpp"

Replace::Replace()
{
}

Replace::~Replace()
{
}

bool printError(std::string message)
{
	std::cout << message << std::endl;
	return false;
}

bool Replace::parsArgs(int argc, char const *argv[])
{
	if (argc != 4)
		return printError("Error: Wrong number of arguments.");
	this->_fileName = argv[1];
	this->_s1 = argv[2];
	this->_s2 = argv[3];
	if (_fileName.empty() || _s1.empty() || _s2.empty())
		return printError("Error: Invalid arguments.");
	return true;
}

bool Replace::replaceFunc()
{
	std::fstream _fileIn;
	_fileIn.open(_fileName, std::ios::in);
	if (!_fileIn)
		return printError("Error: Can't open the input file.");
	std::ofstream _fileOut;
	_fileOut.open(_fileName + ".replace", std::ios::out | std::ios::trunc);
	if (!_fileOut)
		return printError("Error: Could not create the output file");
	std::string line;
	while (getline(_fileIn, line))
	{
		size_t _pos = 0;
		while ((_pos = line.find(_s1, _pos)) != std::string::npos)
		{
			line.replace(_pos, _s1.length(), _s2);
			_pos += _s2.length();
		}
		_fileOut << line << std::endl;
	}
	_fileIn.close();
	_fileOut.close();
	return true;
}
