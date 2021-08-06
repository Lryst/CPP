/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:48:32 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 04:00:16 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(std::string cast) : _cast(cast), _type(-2)
{
	int count;
	unsigned int i;

	count = 0;
	i = -1;
	while (++i < cast.length() && cast[i] == '0')
		;
	if (i == cast.length())
		this->_cast = "0";
	else
		this->_cast = cast.substr(i, cast.length());
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

std::string	Convert::getCast()
{
	return this->_cast;
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
	this->_type == 5 ? this->cast_from_spe() : 0;
	this->_type == 6 ? this->cast_from_spef() :0;
	return this->_type;
}

int	Convert::cast_from_char()
{
	char ret;

	ret = this->_cast[0];
	std::cout << "char : " << ret << std::endl;
	std::cout << "int : " << static_cast<int>(ret) << std::endl;
	std::cout << "float : " << static_cast<float>(ret) << std::endl;
	std::cout << "double : " << static_cast<double>(ret) << std::endl;
	return 0;
}

int	Convert::cast_from_int()
{
	long		ret;
	double		d;
	float		f;

	ret = static_cast<long>(atol(this->_cast.c_str()));
	if (ret < 33 || ret > 126)
		std::cout << "char : Non displayble" <<std::endl;
	else
		std::cout << "char : '" << static_cast<char>(ret) << "'" << std::endl;
	if (ret > INT_MAX || ret < INT_MIN)
		std::cout << "int : impossible" <<std::endl;
	else
		std::cout << "int : " << static_cast<int>(ret) << std::endl;
	f = static_cast<float>(ret);
	d = static_cast<double>(ret);
	std::cout << "float : " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	std::cout << "double : " << std::setprecision(1) << std::fixed << f << std::endl;
	return 0;
}

int	Convert::cast_from_double()
{
	double ret;
	float f;

	ret = static_cast<float>(atof(this->_cast.c_str()));
	if (ret < 33.0 || ret > 126.0)
		std::cout << "char : Non displayble" <<std::endl;
	else
		std::cout << "char : '" << static_cast<char>(ret) << "'" << std::endl;
	if (ret > -2147483648.0 || ret < 2147483647.0)
		std::cout << "int : impossible" <<std::endl;
	else
		std::cout << "int : " << static_cast<int>(ret) << std::endl;
	f = static_cast<float>(ret);
	std::cout << "float : " << std::setprecision(1) << std::fixed << f << "f" << std::endl;
	std::cout << "double : " << ret << std::endl;
	return 0;
}

int	Convert::cast_from_float()
{
	float ret;
	double d;
	long tmp;
	
	tmp = atol(this->_cast.c_str());
	ret = atof(this->_cast.c_str());
	
	if (tmp < 33 || tmp > 126)
		std::cout << "char : impossible" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(ret) << std::endl;
	if (tmp > INT_MAX || tmp < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(ret) << std::endl;
	std::cout << "float : " << std::setprecision(1) << std::fixed << ret << "f" << std::endl;
	d = static_cast<double>(ret);
	std::cout << "double : " << d << std::endl;
	return 0;
}

int	Convert::cast_from_spe()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << this->_cast << "f" << std::endl;
	std::cout << "double : " << this->_cast << std::endl;
	return 0;
}

int	Convert::cast_from_spef()
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : " << this->_cast << std::endl;
	std::cout << "double : " << this->_cast.substr(0, this->_cast.length() - 1) << std::endl;
	return 0;
}