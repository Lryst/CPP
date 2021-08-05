/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:48:32 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 01:07:49 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string cast) : _cast(cast), _type(-2)
{
	int count;

	count = 0;
	for (int i = 0; i < cast.length() && cast[i] == '0'; i++)
		;
	if (i == cast.length())
		this->_cast = '0';
	else
		this->_cast = cast.substr(i, cast.substr(i, cast.length()));
}

Convert::Convert(Convert const & cpy)
{
	this->_cast = cpy._cast;
}

Convert const & Convert::operator=(Convert const & src)
{
	this->_cast = src._cast;
	return *this;
}

Convert::~Convert() {}

void		Convert::setType(int type)
{
	this->_type = type;
}

int			Convert::getType()
{
	return (this->_type);
}

int			Convert::casting()
{
	this->_type == 1 ? this->cast_from_char() : 0;
	this->_type == 2 ? this->cast_from_int() : 0;
	this->_type == 3 ? this->cast_from_float() : 0;
	this->_type == 4 ? this->cast_from_double() : 0;
	this->_type == 5 ? this->cast_spe() : 0;
	this->_type == 6 ? this->cast_spef() :0;
}
/*
void	Convert::cast_from_int()
{
	int ret;

	if (this->_cast.compare("inf") || this->_cast.compare("-inf") || this->_cast.compare("inff") || this->_cast.compare("-inff")
		|| this->_cast.compare("nan") || this->_cast.compare("-nan") || this->_cast.compare("nanf") || this->_cast.compare("-nanf"))
		std::cout << "impossible" << std::endl;
}

void	Convert::cast_from_char()
{
	char ret;

	if (this->_cast.compare("inf") || this->_cast.compare("-inf") || this->_cast.compare("inff") || this->_cast.compare("-inff")
		|| this->_cast.compare("nan") || this->_cast.compare("-nan") || this->_cast.compare("nanf") || this->_cast.compare("-nanf"))
		std::cout << "impossible" << std::endl;
}

void	Convert::cast_from_double()
{
	double ret;
}

void	Convert::cast_from_float()
{
	float ret;
} */
