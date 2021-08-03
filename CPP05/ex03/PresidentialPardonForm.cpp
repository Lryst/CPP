/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:01:43 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 15:42:05 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 145, 137), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy)
{
	this->setGradeR(cpy.getGradeR());
	this->_grade_action = 137;
	this->setName(cpy.getName());
	this->setStatus(cpy.getStatus());
	this->setRaison(cpy.getRaison());
	this->_target = cpy._target;
}

PresidentialPardonForm const & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	this->setGradeR(src.getGradeR());
	this->_grade_action = 137;
	this->setName(src.getName());
	this->setStatus(src.getStatus());
	this->setRaison(src.getRaison());
	this->_target = src._target;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch (std::string& e)
	{
		throw ;
	}
	std::cout << executor.getName() << " was forgiven by Zafod Beeblebrox." << std::endl;
}