/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:01:43 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:31:48 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.cpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential_Pardon_Form", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential_Pardon_Form", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}