/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 17:42:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.cpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = cpy.target;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
	this->_grade_action = cpy._grade_action;
	this->_target = src._target;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int i;

	i = rand() % 2;
	try
	{
		Form:execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	std::cout << "Brrrzzzz....."
	if (i == 0)
		std::cout << executor.getName() << " has been robotomized." << std::endl;
	else
		std::cout << executor.getName() << " was not well robotomized." << std::endl;
}