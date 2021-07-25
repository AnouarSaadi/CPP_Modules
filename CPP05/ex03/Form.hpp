/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:58:04 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/25 18:11:50 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <fstream>
# include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_sign;
	int const			_gradeSign;
	int const			_gradeExec;
	std::string			_target;
public:
	Form();
	Form(std::string const & name, int, int, std::string const & target);
	Form(Form const & src);
	virtual ~Form();
	Form & operator=(Form const & src);
	
	std::string const & getName() const;
	std::string const & getTarget() const;
	int getGradeSign() const;
	int getGradeExec() const;
	bool getSign();

	void beSigned(Bureaucrat &b);
	virtual void action() const = 0;

	void execute(Bureaucrat const & executor) const;

	class GradeTooHighException: public std::exception
	{
	public:
		const char * what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
	public:
		const char * what() const throw();
	};

	class UnsignedFormException: public std::exception
	{
	public:
		const char * what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, Form & av);

#endif
