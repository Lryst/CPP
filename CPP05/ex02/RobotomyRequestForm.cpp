/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:19:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Presidential_Pardon_Form_default", 145)
{
	this->_grade_action = 137;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, int grade_request) : Form(name, 145)
{
	this->_grade_action = 137;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}