/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:51:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/27 18:54:35 by lryst            ###   ########.fr       */
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
	this->_brain = new Brain();
	*(this->_brain) = *(cpy._brain);
	this->type = cpy.type;
}

Cat const & Cat::operator=(Cat const & src)
{
	*(this->_brain) = *(src._brain);
	this->type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat call" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}