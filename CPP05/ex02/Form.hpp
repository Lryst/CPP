/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:21:27 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 13:49:58 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string	_name;
		int		_grade_request;
		int		_grade_action;
		bool	_status;
		std::string		_raison;

	public :
		Form();
		Form(std::string name, int _grade_request, int _grade_action);
		Form(Form const & cpy);
		Form const & operator=(Form const & src);
		virtual ~Form();

		std::string getName() const;
		int			getGradeR() const;
		int			getGradeA() const;
		bool		getStatus()const;
		std::string	getRaison()const;
		
		void		setName(std::string name);
		void		setGradeR(int i);
		void		setGradeA(int i);
		void		setStatus(bool i);
		void		setRaison(std::string raison);

		void		beSigned(Bureaucrat & bur);

		virtual void		execute(Bureaucrat const & executor) const = 0;
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade of form is too high.");
			}
	}high;

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade of this form is too low."); 
			}
	}low;

	class AlreadySignedException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The form is already signed."); 
			}
	}already;
};

std::ostream & operator<<(std::ostream & os, Form const & src);

#endif
