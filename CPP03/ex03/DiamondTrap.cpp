/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:48:34 by lryst             #+#    #+#             */
/*   Updated: 2021/07/01 12:04:48 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_hit = FragTrap::_hit;
	this->_nrj = ScavTrap::_nrj;
	this->_dam = FragTrap::_dam;
    this->_name = ClapTrap::_name;
	std::cout << GREEN << "Default constructor is called. Here we'r go" << RESET << std::endl;
    this->print_values();
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_hit = FragTrap::_hit;
	this->_nrj = ScavTrap::_nrj;
	this->_dam = FragTrap::_dam;
    this->_name = ClapTrap::_name + "_clap_name";
	std::cout << GREEN << "Constructor is called. " << name << " is going to smash everything !" << RESET << std::endl;
    this->print_values();
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy)
{
	std::cout << GREEN << "Copy constructor is called. Hi I'm a copy, I am not unique... Snif... I can not cry..." << RESET << std::endl;
	*this = cpy;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	std::cout << GREEN << "DiamondTrap Assignation operator called" << RESET << std::endl;
	this->_hit = src._hit;
	this->_nrj = src._nrj;
    this->_dam = src._dam;
	this->_name = src._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GREEN << "Deconstructor is called. Call me Titanos Terminatorus !" << RESET << std::endl;
}

void    DiamondTrap::print_values(void)
{
    std::cout << GREEN << "name = " << this->_name << " | hit = " << this->_hit << " | nrj = " << this->_nrj << " | dam = " <<this->_dam << RESET << std::endl;
}