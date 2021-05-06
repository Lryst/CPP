/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:59:21 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 18:05:04 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
   // std::cout << "PlasmaRifle default constructor called." << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & cpy)
{
    *this = cpy;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_dam = src._dam;
    return *this;
}

PlasmaRifle::~PlasmaRifle()
{
   //std::cout << "PlasmaRifle " <<  this->_name << " just died for no apparent reason!" << std::endl;
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" <<std::endl;
}