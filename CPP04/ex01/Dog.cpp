/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:56:59 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 12:57:25 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Dog call" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "Copy Constructor Dog call" << std::endl;
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain[i] = cpy._brain[i];
	this->type = cpy.type;
}

Dog const & Dog::operator=(Dog const & src)
{
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain[i] = src._brain[i];
	this->type = src.type;
	return *this;
}

Dog::~Dog() 
{
	std::cout << "Destructor Dog call" << std::endl;
	delete this->_brain;
}