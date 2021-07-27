/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:56:59 by lryst             #+#    #+#             */
/*   Updated: 2021/07/27 18:16:32 by lryst            ###   ########.fr       */
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
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	this->type = cpy.type;
}

Dog const & Dog::operator=(Dog const & src)
{
	*(this->_brain) = *(src._brain);
	this->type = src.type;
	return *this;
}

Dog::~Dog() 
{
	std::cout << "Destructor Dog call" << std::endl;
	delete this->_brain;
}