/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:34:18 by lryst             #+#    #+#             */
/*   Updated: 2021/08/01 19:06:00 by lryst            ###   ########.fr       */
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

void        Form::setStatus(std::string raison)
{
	this->_raison = raison;
}

void        Form::beSigned(Bureaucrat const & bur)
{
	if (this->_grade == 1)
		std::cout << "The form " << this->_name << " is already signed" << std::endl;
	try
	{
		if (bur.getGrade() > this->_grade)
			throw low;
		else
			this->_status = 1;
	}
	catch (std::exception& e)
	{
		std::cout << e.what()<< std::endl;
	}
}

std::ostream & operator<<(std::ostream & os, Form const & src)
{
	if (src.getStatus() == 0)
		os << "The form " << src.getName() << " has " << src.getGrade() << ", is signed";
	if (src.getStatus() == 1)
		os << "The form " << src.getName() << " has " << src.getGrade() << ", is not signed";
	return (os);
}
