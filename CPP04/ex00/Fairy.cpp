/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fairy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:24:16 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 15:10:22 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fairy.hpp"

Fairy::Fairy()
{
    std::cout << "Fairy default constructor called." << std::endl;
}

Fairy::Fairy(std::string name) : Victim(name)
{
    std::cout << "Youhou, I'm " << this->_name << ", the fairy!" << std::endl;
}

Fairy::Fairy(Fairy const & cpy)
{
    *this = cpy;
}

Fairy & Fairy::operator=(Fairy const & src)
{
    this->_name = src._name;
    return *this;
}

Fairy::~Fairy()
{
    std::cout << "Abracadabra I disappear..." << std::endl;
}

std::string Fairy::getname()
{
    return (this->_name);
}

void    Fairy::getPolymorphed() const
{
    std::cout << "F*** off, I'm " << this->_name << ", the Great Fairy, stop nonsense, little junk wizard" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Fairy & ret)
{
    std::string name = ret.getname();
    
    o << "I'm " << name << " and I like zebras!" << std::endl;
    
    return o;
}