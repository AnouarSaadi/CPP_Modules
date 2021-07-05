/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:58:04 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/05 17:23:26 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				_sign;
	int const			_grades;
public:
	Form();
	Form(std::string const & name, int const grade);
	Form(Form const & src);
	~Form();
	Form & operator=(Form const & src);
	
	std::string const & getName() const;
	int const getGrade() const;
	bool getSign();

	void beSigned(Bureaucrat &b);

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
};

std::ostream & operator<<(std::ostream & os, Form & av);

#endif