/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 22:37:21 by lryst             #+#    #+#             */
/*   Updated: 2021/07/01 11:18:23 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit(10), _nrj(10), _dam(0), _name("Default Claptrap")
{
	std::cout << RED << "Claptrap Default construtor." << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit(10), _nrj(10), _dam(0), _name(name)
{
	std::cout << RED << "ClapTrap Mother constructor called." << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
	std::cout << "ClapTrap Copy constructor is called." << std::endl;
	*this = cpy;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "ClaptTrap Assignation operator called" << std::endl;
	this->_hit = src._hit;
	this->_nrj = src._nrj;
    this->_dam = src._dam;
	this->_name = src._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap Mother DESTRUCTOR called." << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit >= amount)
	{
		this->_hit -= amount;
		std::cout << "Oh no ! " << this->_name << " takes " << amount << " points of damage ! Hold on !" << std::endl;
	}
	else
	{
		std::cout << this->_name << "it is too weak to inflict damage" << std::endl;
		return;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    this->_hit += amount;
	std::cout << CYAN << "Pfiouuff , FR4G-TP " << BOLDCYAN << this->_name << RESET << CYAN << " just take a little breath... " << amount << " extra points for Gryffindor ! You got the POWER !!" << RESET << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "FR4G-T " << this->_name << " attacks " << target << ", causing " << this->_dam << " points of damage!" <<std::endl;
}