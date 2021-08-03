/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:21 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 14:47:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade_request(75) {}

Bureaucrat::Bureaucrat(std::string name, int grade)
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
			this->_grade_request = grade;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	this->_grade_request = cpy._grade_request;
	this->_name = cpy._name;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade_request = src._grade_request;
	this->_name = src._name;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int			Bureaucrat::getGradeR() const
{
	return this->_grade_request;
}

void		Bureaucrat::inc_grade_request()
{
	if (this->_grade_request < 150)
		this->_grade_request++;
}

void		Bureaucrat::dec_grade_request()
{
	if (this->_grade_request > 1)
		this->_grade_request--;
}

void		Bureaucrat::signForm(Form & doc)
{
	try
	{
		if (doc.getGradeR() < this->getGradeR())
			throw low;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return;
	}
	if (doc.getStatus() == 0)
	{
		doc.setStatus(1);
		std::cout << this->getName() << " signs " << doc.getName() << std::endl;
	}
	else if (doc.getStatus() == 1)
		std::cout << this->getName() << " cannot sign because this form is already signed" << std::endl;
}

void		Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (form.getStatus() == 0)
			throw not_signed;
		if (form.getGradeA() < this->_grade_request)
			throw high;
		else
			form.execute(*this);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " executes " << form.getName() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGradeR() << std::endl;	
	return (os);
}
