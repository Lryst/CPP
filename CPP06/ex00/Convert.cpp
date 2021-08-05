/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:48:32 by lryst             #+#    #+#             */
/*   Updated: 2021/08/05 23:45:54 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string cast) : _cast(cast)
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

void	Convert::cast_to_int()
{
	int ret;

	if (this->_cast.compare("inf") || this->_cast.compare("-inf") || this->_cast.compare("inff") || this->_cast.compare("-inff")
		|| this->_cast.compare("nan") || this->_cast.compare("-nan") || this->_cast.compare("nanf") || this->_cast.compare("-nanf"))
		std::cout << "impossible" << std::endl;
}

void	Convert::cast_to_char()
{
	char ret;

	if (this->_cast.compare("inf") || this->_cast.compare("-inf") || this->_cast.compare("inff") || this->_cast.compare("-inff")
		|| this->_cast.compare("nan") || this->_cast.compare("-nan") || this->_cast.compare("nanf") || this->_cast.compare("-nanf"))
		std::cout << "impossible" << std::endl;
}

void	Convert::cast_to_double()
{
	double ret;
}

void	Convert::cast_to_float()
{
	float ret;
}
