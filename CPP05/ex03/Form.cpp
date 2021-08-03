/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:34:18 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 13:54:20 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade_request(75), _grade_action(150), _status(0), _raison("\0") {}

Form::Form(std::string name, int grade_request, int grade_action)
{
	try
	{
		if (_grade_action > 150 || _grade_request > 150)
			throw high;
		if (_grade_action > 1 || _grade_request > 1)
			throw low;
		else
		{
			this->_name = name;
			this->_grade_request = grade_request;
			this->_grade_action = grade_action;
			this->_status = 0;
			this->_raison = "\0";
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const & cpy)
{
	this->_grade_request = cpy._grade_request;
	this->_grade_action = cpy._grade_action;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
}

Form const & Form::operator=(Form const & src)
{
	this->_grade_request = src._grade_request;
	this->_grade_action = src._grade_action;
	this->_name = src._name;
	this->_status = src._status;
	this->_raison = src._raison;
	return *this;
}

Form::~Form() {}

std::string	Form::getName() const
{
	return this->_name;
}

int			Form::getGradeR() const
{
	return this->_grade_request;
}

int			Form::getGradeA() const
{
	return this->_grade_action;
}

bool        Form::getStatus() const
{
	return (this->_status);
}

std::string Form::getRaison() const
{
	return (this->_raison);
}

void		Form::setName(std::string name)
{
	this->_name = name;
}

void		Form::setGradeR(int i)
{
	this->_grade_request = i;
}

void		Form::setGradeA(int i)
{
	this->_grade_action = i;
}

void        Form::setStatus(bool i)
{
	this->_status = i;
}

void		Form::setRaison(std::string raison)
{
	this->_raison = raison;
}

void        Form::beSigned(Bureaucrat & bur)
{
	try
	{
		if (this->_status == 1)
		{
			throw already;
			//this->_raison = "the form " + this->_name + " is already signed\n";
		}
		if (bur.getGradeR() > this->_grade_request)
		{
			//this->_raison = "the grade of this form is too low.";
			throw low;
		}
		else
			bur.signForm(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void		Form::execute(Bureaucrat const & executor) const
{
	//std::string tmp;

	//tmp = "the form ";
	try
	{
		/* if (this->_status == 1)
		{
			throw already;
			//tmp += this->getName();
			//tmp += " is already signed\n";
			//this->setRaison(tmp);
		} */
		if (executor.getGradeR() > this->_grade_action)
		{
			//this->setRaison = "the grade of this form is too low.";
			throw high;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}


std::ostream & operator<<(std::ostream & os, Form const & src)
{
	if (src.getStatus() == 1)
		os << "The form " << src.getName() << " has " << src.getGradeR() << " grade for sign and, " << src.getGradeA() << " for to execute " << ": is signed" << std::endl;
	if (src.getStatus() == 0)
		os << "The form " << src.getName() << " has " << src.getGradeR() << " grade for sign and, " << src.getGradeA() << " for to execute " << ": is not signed" << std::endl;
	return (os);
}
