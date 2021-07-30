/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:46 by lryst             #+#    #+#             */
/*   Updated: 2021/07/29 16:55:37 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	private :
		std::string _name;
		int			_grade;

	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & cpy);
		Bureaucrat const & operator=(Bureaucrat const & src);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;
		void		inc_grade();
		void		dec_grade();
		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw()
			{
				return ("The grade is to too high.");
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
};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src);

#endif