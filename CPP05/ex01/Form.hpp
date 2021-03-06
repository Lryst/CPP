/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:21:27 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 14:41:19 by lryst            ###   ########.fr       */
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
		int		_grade;
		bool	_status;
		std::string		_raison;

	public :
		Form();
		Form(std::string name, int _grade);
		Form(Form const & cpy);
		Form const & operator=(Form const & src);
		~Form();

		std::string getName() const;
		int			getGrade() const;
		bool		getStatus()const;
		std::string	getRaison()const;
		
		void		setStatus(bool i);
		void		setRaison(std::string raison);

		void		beSigned(Bureaucrat & bur);
		
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
};

std::ostream & operator<<(std::ostream & os, Form const & src);

#endif
