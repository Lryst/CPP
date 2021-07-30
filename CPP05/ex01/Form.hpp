/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:21:27 by lryst             #+#    #+#             */
/*   Updated: 2021/07/30 17:17:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	private :
		bool	_status;
		std::string const	_name;
		int const		_grade;
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
		
		void		setStatus(std::string const raison);

		void		beSigned(Bureaucrat const & bur);
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade of this form is too high.");
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
