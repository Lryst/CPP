/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:04:29 by lryst             #+#    #+#             */
/*   Updated: 2021/05/31 12:08:42 by lryst            ###   ########.fr       */
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
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	this->_type = src->_type;
	this->_xp = src->_xp;
	return *this;
}
AMateria::~AMateria()
{
	
}

std::string	const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP const
{
	return (this->_xp);
}

void	AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* shoots an ice bolt at " << target::getName() << " *" << std::endl;
}
