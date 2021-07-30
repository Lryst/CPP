/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/29 16:56:08 by lryst            ###   ########.fr       */
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
	this->_grade++;
}

void		Bureaucrat::dec_grade()
{
	this->_grade--;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();	
	return (os);
}
