/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:00:30 by lryst             #+#    #+#             */
/*   Updated: 2021/05/04 14:17:25 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "DefaultSuperTrap")
{
/* 	_hit = FragTrap::GetHitPoint();
	_max_hit = FragTrap::GetMaxHitPoint();
	_nrj = NinjaTrap::GetEnergy();
	_max_nrj = NinjaTrap::GetMaxEnergy();
	_lvl = 1;
	_melee_att = NinjaTrap::GetMeleeAttack();
	_ranged_att = FragTrap::GetRangedAttack();
	_armor_red = FragTrap::GetArmorRed();
	_name = "DefaultSuperTrap"; */
	std::cout << "SuperTrap Default constructor called. He's the Super star !" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name)
{
	std::cout << "SuperTrap Constructor called. He's the Super star !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & cpy)
{
	std::cout << "SuperTrap copy constructor called." << std::endl;
	*this = cpy;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
{
	std::cout << "SuperTrapTrap Assignation operator called" << std::endl;
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

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Deconstructor called." << std::endl;
}