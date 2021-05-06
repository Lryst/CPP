/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:09:59 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:03:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    //std::cout << "PowerFist default constructor called." << std::endl;
}

PowerFist::PowerFist(PowerFist const & cpy)
{
    *this = cpy;
}

PowerFist & PowerFist::operator=(PowerFist const & src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_dam = src._dam;
    return *this;
}

PowerFist::~PowerFist()
{
   // std::cout << "PowerFist " <<  this->_name << " just died for no apparent reason!" << std::endl;
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" <<std::endl;
}
