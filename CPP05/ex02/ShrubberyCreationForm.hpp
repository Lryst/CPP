/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:05:58 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:12:54 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class ShrubberyCreationForm : public class Form
{
	private :
		int _grade_action;

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, int grade_request);
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm const & operator=(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

#endif
