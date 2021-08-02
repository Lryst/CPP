/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:01:43 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 17:43:05 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.cpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = cpy.target;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = src._target;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form:execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	std::cout << executor.getName() << "was forgiven by Zafod Beeblebrox." << std::endl;
}