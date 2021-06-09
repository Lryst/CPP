/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:04:29 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 18:02:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(AMateria const & cpy)
{
	*this = cpy;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	this->_type = src._type;
	this->_xp = src._xp;
	return *this;
}

AMateria::~AMateria()
{
	
}

std::string	const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
