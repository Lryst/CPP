/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:17:20 by lryst             #+#    #+#             */
/*   Updated: 2021/04/23 15:05:12 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _p_fixe(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_p_fixe = nbr << this->_nbr_bits;
}

Fixed::Fixed(float const fnbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_p_fixe = (roundf(fnbr * (1 << this->_nbr_bits)));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_p_fixe = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::toInt(void) const
{
	return (int)(roundf(this->_p_fixe >> this->_nbr_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_p_fixe / (float)(1 << this->_nbr_bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_p_fixe = raw;
	return ;
}

int		Fixed::getRawBits(void) const
{
	return this->_p_fixe;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return (o);
}