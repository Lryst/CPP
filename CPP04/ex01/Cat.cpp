/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:51:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 14:21:52 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat call" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "Copy Constructor Cat call" << std::endl;
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain[i] = cpy._brain[i];
	this->type = cpy.type;
	this->type = cpy.type;
	std::cout << &this->type << std::endl;
	std::cout << &cpy.type << std::endl;
}

Cat const & Cat::operator=(Cat const & src)
{
	delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100 ; i++)
		this->_brain[i] = src._brain[i];
	this->type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat call" << std::endl;
	delete this->_brain;
}