/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:46 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 17:58:00 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		std::string _name;
		int			_grade_request;

	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & cpy);
		Bureaucrat const & operator=(Bureaucrat const & src);
		~Bureaucrat();

		std::string getName() const;
		int			getGradeR() const;
		void		inc_garde_request();
		void		dec_garde_request();
		void		signForm(Form & doc);
		void		executeForm(Form Const & form);
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade is too high.");
			}
	}high;

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade is too low.");
			}
	}low;
	
	class FormNotSignedYet : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("This form is not signed.");
			}
	}not_signed;
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);

#endif
