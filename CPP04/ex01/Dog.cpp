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
	this->type = "Dog";
}

Dog::Dog(Dog const & cpy)
{
	this->type = cpy.type;
}

Dog const & Dog::operator=(Dog const & src)
{
	this->type = src.type;
	return *this;
}

Dog::~Dog() {}