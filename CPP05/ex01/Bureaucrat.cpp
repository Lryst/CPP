/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/30 17:03:30 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(75) {}

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
			this->_grade = grade;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	this->_grade = cpy._grade;
	this->_name = cpy._name;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src._grade;
	this->_name = src._name;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int			Bureaucrat::getGrade() const
{
	return this->_grade;
}

void		Bureaucrat::inc_grade()
{
	if (this->_grade < 150)
		this->_grade++;
}

void		Bureaucrat::dec_grade()
{
	if (this->_grade > 1)
		this->_grade--;
}

void		Bureaucrat::signForm(Form & doc)
{
	if (doc.getStatus() == 0)
		std::cout << this->getName() << " signs " << doc.getName() << std::endl;
	if (doc.getStatus() == 1)
		std::cout << this->getName() << " cannot sign because " << doc.getRaison() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();	
	return (os);
}
