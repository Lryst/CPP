/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:02:03 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:32:04 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class PresidentialPardonForm : public class Form
{
	private :
		std::string	target;

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, int grade_request);
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		PresidentialPardonForm const & operator=(PresidentialPardonForm const & src);
		~PresidentialPardonForm();

#endif
