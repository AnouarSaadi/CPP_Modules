/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:07:23 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/08 14:02:25 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	Intern(Intern const & src);
	~Intern();
	Intern& operator=(Intern const & src);

	Form* makeForm(std::string const & nameForm, std::string const & target);
	class InternException : public std::exception
	{
	public:
		const char * what() const throw();
	};

};

typedef Form * (*ptrToFunc)(std::string const & target);

#endif