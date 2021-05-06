/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:18:12 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 17:47:12 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
    std::cout << "AWeapon default constructor called." << std::endl;
}

AWeapon::AWeapon(std::string const & name, int acost, int damage) : _name(name), _apcost(acost), _dam(damage)
{
}

AWeapon::AWeapon(AWeapon const & cpy)
{
    *this = cpy;
}

AWeapon & AWeapon::operator=(AWeapon const & src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_dam = src._dam;
    return *this;
}

AWeapon::~AWeapon()
{
   // std::cout << "AWeapon " <<  this->_name << " just died for no apparent reason!" << std::endl;
}

std::string const & AWeapon::getName() const
{
    return (this->_name);
}

int AWeapon::getAPCost() const
{
    return (this->_apcost);
}

int AWeapon::getDamage() const
{
    return (this->_dam);
}
