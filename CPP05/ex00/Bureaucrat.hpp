/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:27:32 by asaadi            #+#    #+#             */
/*   Updated: 2021/07/05 11:30:34 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const & name, int _grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat const & src);

	std::string const & getName() const;
	const int &	getGrade();
	void incrementGrade();
	void decrementGrade();

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

std::ostream& operator<<(std::ostream & os, Bureaucrat & av);

#endif
