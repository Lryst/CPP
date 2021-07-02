/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:33:46 by lryst             #+#    #+#             */
/*   Updated: 2021/07/01 11:18:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Default ClapTrap";
	this->_hit = 100;
	this->_nrj = 50;
	this->_dam = 20;
	std::cout << BLUE << "ScavTrap Default construtor." << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit = 100;
	this->_nrj = 50;
	this->_dam = 20;
	std::cout << BLUE << "Constructor is called. A new ScavTrap is born, his name ? " << this->_name << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "Copy constructor is called. Like a Photocopier." << std::endl;
	*this = cpy;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_hit = src._hit;
	this->_nrj = src._nrj;
    this->_dam = src._dam;
	this->_name = src._name;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << BLUE << "Deconstructor is called. Bye bye ScavTrap !" << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << "is now, Gate Keeper." << std::endl;
}