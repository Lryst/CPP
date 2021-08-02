/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:05:06 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:19:02 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm() : Form("Presidential_Pardon_Form_default", 145)
{
	this->_grade_action = 137;
}

ShrubberryCreationForm::ShrubberryCreationForm(std::string name, int grade_request) : Form(name, 145)
{
	this->_grade_action = 137;
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
}

ShrubberryCreationForm const & ShrubberryCreationForm::operator=(ShrubberryCreationForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;

	return *this;
}

ShrubberryCreationForm::~ShrubberryCreationForm(){}