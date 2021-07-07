/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:52:35 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/07 14:06:58 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):
Form("Shrubbery Creation", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	this->Form::operator=(src);
	return *this;
}

void ShrubberyCreationForm::action() const
{
	try
	{
		std::ofstream _fileOut;
		_fileOut.open(this->getTarget() + "_shrubbery", std::ios::out | std::ios::trunc);
		if (!_fileOut)
			throw "Cannot open the output file";
		_fileOut << "          .     .  .      +     .      .          .\n";
		_fileOut << "     .       .      .     #       .           .\n";
		_fileOut << "        .      .         ###            .      .      .\n";
		_fileOut << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
		_fileOut << "          .      . \"####\"###\"####\"  .\n";
		_fileOut << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
		_fileOut << "  .             \"#########\"#########\"        .        .\n";
		_fileOut << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
		_fileOut << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
		_fileOut << "                .\"##\"#####\"#####\"##\"           .      .\n";
		_fileOut << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
		_fileOut << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
		_fileOut << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
		_fileOut << "            .     \"      000      \"    .     .\n";
		_fileOut << "       .         .   .   000     .        .       .\n";
		_fileOut << ".. .. ..................O000O........................ ...... ...\n";
		_fileOut <<"                 v\n";
		_fileOut <<"                >X<\n";
		_fileOut <<"                 A\n";
		_fileOut <<"                d$b\n";
		_fileOut <<"              .d\\$$b.\n";
		_fileOut <<"            .d$i$$\\$$b.\n";
		_fileOut <<"               d$$@b\n";
		_fileOut <<"              d\\$$$ib\n";
		_fileOut <<"            .d$$$\\$$$b.\n";
		_fileOut <<"          .d$$@$$$$\\$$ib.\n";
		_fileOut <<"              d$$i$$b\n";
		_fileOut <<"             d\\$$$$@$b\n";
		_fileOut <<"          .d$@$$\\$$$$$@b.\n";
		_fileOut <<"        .d$$$$i$$$\\$$$$$$b.\n";
		_fileOut <<"                ###\n";
		_fileOut <<"                ###\n";
		_fileOut <<"                ###\n";
		_fileOut << "          .     .  .      +     .      .          .\n";
		_fileOut << "     .       .      .     #       .           .\n";
		_fileOut << "        .      .         ###            .      .      .\n";
		_fileOut << "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n";
		_fileOut << "          .      . \"####\"###\"####\"  .\n";
		_fileOut << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n";
		_fileOut << "  .             \"#########\"#########\"        .        .\n";
		_fileOut << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n";
		_fileOut << "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n";
		_fileOut << "                .\"##\"#####\"#####\"##\"           .      .\n";
		_fileOut << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n";
		_fileOut << "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n";
		_fileOut << "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n";
		_fileOut << "            .     \"      000      \"    .     .\n";
		_fileOut << "       .         .   .   000     .        .       .\n";
		_fileOut << ".. .. ..................O000O........................ ...... ...\n";
		_fileOut.close();
		std::cout << "The output file has been created successfully\n";
	}
	catch (const char * msg)
	{
		std::cout << msg << std::endl;
	}
}
