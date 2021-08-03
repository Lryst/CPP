/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:05:58 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 15:42:44 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP
# include <fstream>
# include <sstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		int _grade_action;
		std::string	_target;

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

		void		execute(Bureaucrat const & executor) const;
};

#endif
