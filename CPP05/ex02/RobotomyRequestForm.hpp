/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:26 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:12:50 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class RobotomyRequestForm : public class Form
{
	private :
		int _grade_action;

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, int grade_request);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm const & operator=(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

#endif
