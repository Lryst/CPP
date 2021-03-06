/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:34:18 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 15:24:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade(75), _status(0), _raison("\0") {}

Form::Form(std::string name, int grade)
{
	try
	{
		if (grade > 150)
			throw high;
		if (grade < 1)
			throw low;
		else
		{
			this->_name = name;
			this->_grade = grade;
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
	this->_grade = cpy._grade;
	this->_name = cpy._name;
	this->_status = cpy._status;
	this->_raison = cpy._raison;
}

Form const & Form::operator=(Form const & src)
{
	this->_grade = src._grade;
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

int			Form::getGrade() const
{
	return this->_grade;
}

bool        Form::getStatus() const
{
	return (this->_status);
}

std::string Form::getRaison() const
{
	return (this->_raison);
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
	if (this->_status == 1)
		this->_raison = "the form " + this->_name + " is already signed\n";
	try
	{
		if (bur.getGrade() > this->_grade)
		{
			this->_raison = "the grade of this form is too low.";
			throw low;
		}
		else
			bur.signForm(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
}

std::ostream & operator<<(std::ostream & os, Form const & src)
{
	if (src.getStatus() == 1)
		os << "The form " << src.getName() << " has " << src.getGrade() << ", is signed" << std::endl;
	if (src.getStatus() == 0)
		os << "The form " << src.getName() << " has " << src.getGrade() << ", is not signed" << std::endl;
	return (os);
}
