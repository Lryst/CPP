/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:18 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 10:48:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    std::cout << "Sorcerer default constructor called." << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & cpy)
{
    *this = cpy;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
    this->_name = src._name;
    this->_title = src._title;
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getname()
{
    return (this->_name);
}

std::string Sorcerer::gettitle()
{
    return (this->_title);
}

void    Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer & ret)
{
    std::string name = ret.getname();
    std::string title = ret.gettitle();
    
    o << "I am " << name << ", " << title << ", and I like ponies!" << std::endl;
    
    return o;
}