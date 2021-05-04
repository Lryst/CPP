/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:06:59 by lryst             #+#    #+#             */
/*   Updated: 2021/05/03 11:18:46 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << RED << "Claptrap Default construtor." << RESET << std::endl;
}

ClapTrap::ClapTrap(unsigned int hit, unsigned int max_hit, unsigned int nrj, unsigned int max_nrj, unsigned int lvl, unsigned int melee_att, unsigned int ranged_att, unsigned int armor_red, std::string name)
{
	this->_hit = hit;
	this->_max_hit = max_hit;
	this->_nrj = nrj;
	this->_max_nrj = max_nrj;
	this->_lvl = lvl;
	this->_melee_att = melee_att;
	this->_ranged_att = ranged_att;
	this->_armor_red = armor_red;
	this->_name = name;
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

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap Mother DESTRUCTOR called." << RESET << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "You don't see me, but I do... " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at ranged, causing " << this->_ranged_att << " points of damage !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ich, Ich free fight ! " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at melee, causing " << this->_melee_att << " points of damage !" <<std::endl;
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
	if (this->_nrj < this->_max_nrj || this->_hit < this->_max_hit)
	{
		std::cout << CYAN << "Pfiouuff , FR4G-TP " << BOLDCYAN << this->_name << RESET << CYAN << " just take a little breath... " << amount << " extra points for Gryffindor ! You got the POWER !!" << RESET << std::endl;
		this->_hit += amount;
		if (this->_hit > this->_max_hit)
			this->_hit = this->_max_hit;
		this->_nrj += amount;
		if (this->_nrj > this->_max_nrj)
			this->_nrj = this->_max_nrj;
	}
	else
		std::cout << "Oupsi, " << this->_name << " is actually in great shape ! Let's go !" << RESET << std::endl;
}