/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:09 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 16:50:52 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const & cpy)
{
    *this = cpy;    
}

Cure & Cure::operator=(Cure const & src)
{
    this->_type = src._type;
    this->_xp = src._xp;
    return *this;
}
Cure::~Cure(){}

AMateria * Cure::clone() const
{
    AMateria *nv = new Cure;
    return nv;
}