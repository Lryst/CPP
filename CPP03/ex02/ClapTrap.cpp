/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:06:59 by lryst             #+#    #+#             */
/*   Updated: 2021/04/29 14:14:22 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_hit = src._hit;
    this->_hit = src._hit;
	this->_max_hit = src._max_hit;
	this->_nrj = src._nrj;
	this->_max_nrj = src._max_nrj;
	this->_lvl = src._lvl;
	this->_melee_att = src._melee_att;
	this->_ranged_att = src._ranged_att;
	this->_armor_red = src._armor_red;
	this->_name = src._name;
	return *this;
}