/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:37:54 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:22:38 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
private:
	std::fstream _fileIn;
	std::fstream _fileOut;
	std::string _fileName;
	std::string _s1;
	std::string _s2;
public:
	Replace();
	~Replace();
	bool replaceFunc();
	bool parsArgs(int argc, char const *argv[]);
};

#endif
