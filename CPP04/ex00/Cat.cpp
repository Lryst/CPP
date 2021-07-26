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
	this->type = "Cat";
}

Cat::Cat(Cat const & cpy)
{
	this->type = cpy.type;
}

Cat const & Cat::operator=(Cat const & src)
{
	this->type = src.type;
	return *this;
}

Cat::~Cat() {}