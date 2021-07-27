/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:53 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 17:57:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const & cpy)
{
    *this = cpy;    
}

Ice & Ice::operator=(Ice const & src)
{
    this->_type = src._type;
    return *this;
}
Ice::~Ice(){}

AMateria * Ice::clone() const
{
    AMateria *nv = new Ice();
    return nv;
}