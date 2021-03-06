/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:37:47 by lryst             #+#    #+#             */
/*   Updated: 2021/07/27 18:54:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("NULL")
{
	std::cout << "Constructor Animal call" << std::endl;
}

Animal::Animal(Animal const & cpy)
{
	std::cout << "Copy Constructor Animal call" << std::endl;
	this->type = cpy.type;
}

Animal const & Animal::operator=(Animal const & src)
{
	this->type = src.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal call" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	if (this->getType() == "Dog")
		std::cout << "Wouf" << std::endl;
	if (this->getType() == "Cat")
		std::cout << "Miaou" <<std::endl;
	else
		return;
}