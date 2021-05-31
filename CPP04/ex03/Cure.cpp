/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:51:09 by lryst             #+#    #+#             */
/*   Updated: 2021/05/31 12:11:03 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){}

Cure::Cure(Cure const & cpy)
{
    *this = cpy;    
}

Cure & Cure::operator=(Cure const & src) const
{
    this->_type = src._type;
    this->_xp = src.type;
    return *this;
}
Cure::~Cure(){}

AMateria * Cure::clone() const;
{
    AMateria *nv = new AMateria
}