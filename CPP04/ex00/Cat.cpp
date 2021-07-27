/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:51:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 12:57:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor Cat call" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "Copy Constructor Cat call" << std::endl;
	this->type = cpy.type;
	std::cout << &this->type << std::endl;
	std::cout << &cpy.type << std::endl;
}

Cat const & Cat::operator=(Cat const & src)
{
	this->type = src.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat call" << std::endl;
}