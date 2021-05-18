/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:13:30 by lryst             #+#    #+#             */
/*   Updated: 2021/05/18 14:33:49 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    
}

Squad::Squad(Squad const & cpy)
{
    
}

Squad   & Squad::operator=(Squad const & src)
{
    this->_count = src._count;
    this->_unity = src._unity;
}

Squad::~Squad()
{
    
}

void    Squad::set_count(int nbr)
{
    this->_count = nbr;
}

int     Squad::getCount() const
{
    return (this->_count);
}

ISpaceMarine * Squad::getUnit(int i) const
{
    return (this->_unity[i]);
}

int     Squad::push(ISpaceMarine *new_unit)
{
    int i;

    i = 0;
    if (!new_unit)
        return (-1);
    ISpaceMarine **tmp = new ISpaceMarine*[this->_count + 1];
    while (i++ < this->_count)
    {
        tmp[i] = this->_unity[i];
    }
    tmp[i] = new_unit;
    delete this->_unity;
    this->_unity = tmp;
    delete tmp;
    return (1);
}