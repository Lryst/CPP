/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:34:18 by lryst             #+#    #+#             */
/*   Updated: 2021/07/30 17:07:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _grade(75), _status(0) {}

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
}

Form const & Form::operator=(Form const & src)
{
	this->_grade = src._grade;
	this->_name = src._name;
    this->_status = src._status;
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
    retrun (this->_status);
}

std::string Form::getRaison() const
{
    return (this->_raison);
}

void        Form::setStatus(td::string raison)
{
    this->_raison = raison;
}

void		Form::inc_grade()
{
	if (this->_grade < 150)
		this->_grade++;
}

void		Form::dec_grade()
{
	if (this->_grade > 1)
		this->_grade--;
}

std::ostream & operator<<(std::ostream & os, Form const & src)
{
    if (this->getStatus() == 0)
	    os << "The form " << src.getName() << " has " << src.getGrade() << ", is signed";
    if (this->getStatus() == 1)
        os << "The form " << src.getName() << " has " << src.getGrade() << ", is not signed";
	return (os);
}
