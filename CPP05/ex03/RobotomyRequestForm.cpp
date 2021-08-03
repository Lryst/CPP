/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 15:42:30 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{

	this->setGradeR(cpy.getGradeR());
	this->_grade_action = 45;
	this->setName(cpy.getName());
	this->setStatus(cpy.getStatus());
	this->setRaison(cpy.getRaison());
	this->_target = cpy._target;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->setGradeR(src.getGradeR());
	this->_grade_action = 45;
	this->setName(src.getName());
	this->setStatus(src.getStatus());
	this->setRaison(src.getRaison());
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
		Form::execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	std::cout << "Brrrzzzz.....";
	if (i == 0)
		std::cout << executor.getName() << " has been robotomized." << std::endl;
	else
		std::cout << executor.getName() << " was not well robotomized." << std::endl;
}