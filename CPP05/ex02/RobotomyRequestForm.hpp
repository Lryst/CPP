/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:26 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 13:30:21 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		int _grade_action;
		std::string	_target;

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm const & operator=(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		/* std::string getTarget();
		int			getGradeA();

		void		setTarget(std::string target);
		void		setGradeA(int i); */
		
		void		execute(Bureaucrat const & executor) const;
};

#endif
