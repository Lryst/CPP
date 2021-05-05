/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:29 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 11:21:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    std::cout << "Victim default constructor called." << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & cpy)
{
    *this = cpy;
}

Victim & Victim::operator=(Victim const & src)
{
    this->_name = src._name;
    return *this;
}

Victim::~Victim()
{
    std::cout << "Victim " <<  this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getname()
{
    return (this->_name);
}

void    Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim & ret)
{
    std::string name = ret.getname();
    
    o << "I'm " << name << " and I like otters!" << std::endl;
    
    return o;
}