/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:04:32 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 13:05:21 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy)
{
	this->type = cpy.type;
}

WrongAnimal const & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->type = src.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm a Wrong Animal Rrrrrr..." << std::endl;
}