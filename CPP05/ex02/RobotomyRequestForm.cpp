/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:04:07 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 13:49:38 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	//this->_grade_action = 45;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	//this->_grade_action = 45;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy)
{

	this->setGradeR(cpy.getGradeR());
	//this->setGradeA(cpy.getGradeA());
	this->_grade_action = 45;
	this->setName(cpy.getName());
	this->setStatus(cpy.getStatus());
	this->setRaison(cpy.getRaison());
	this->_target = cpy._target;
}

RobotomyRequestForm const & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	this->setGradeR(src.getGradeR());
	//this->setGradeA(src.getGradeA());
	this->_grade_action = 45;
	this->setName(src.getName());
	this->setStatus(src.getStatus());
	this->setRaison(src.getRaison());
	this->_target = src._target;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

/* std::string	RobotomyRequestForm::getTarget()
{
	return (this->_target);
}

int RobotomyRequestForm::getGradeA()
{
	return this->_grade_action;
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}

void	RobotomyRequestForm::setGradeA(int i)
{
	this->_grade_action = i;
} */

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