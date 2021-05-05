/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:05 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 11:22:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
    std::cout << "Peon default constructor called." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & cpy)
{
    *this = cpy;
}

Peon & Peon::operator=(Peon const & src)
{
    this->_name = src._name;
    return *this;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

std::string Peon::getname()
{
    return (this->_name);
}

void    Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon & ret)
{
    std::string name = ret.getname();
    
    o << "I'm " << name << " and I like otters!" << std::endl;
    
    return o;
}