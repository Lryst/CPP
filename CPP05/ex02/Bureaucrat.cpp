/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:21 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 16:27:45 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _garde_request(75) {}

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
			this->_garde_request = grade;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	this->_garde_request = cpy._garde_request;
	this->_name = cpy._name;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_garde_request = src._garde_request;
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
	return this->_garde_request;
}

void		Bureaucrat::inc_garde_request()
{
	if (this->_garde_request < 150)
		this->_garde_request++;
}

void		Bureaucrat::dec_garde_request()
{
	if (this->_garde_request > 1)
		this->_garde_request--;
}

void		Bureaucrat::signForm(Form & doc)
{
	if (doc.getStatus() == 0)
	{
		doc.setStatus(1);
		std::cout << this->getName() << " signs " << doc.getName() << std::endl;
	}
	if (doc.getStatus() == 1)
		std::cout << this->getName() << " cannot sign because " << doc.getRaison() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGradeR();	
	return (os);
}
