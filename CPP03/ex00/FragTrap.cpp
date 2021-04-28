/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:08:32 by lryst             #+#    #+#             */
/*   Updated: 2021/04/28 13:15:24 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _hit(100), _max_hit(100), _nrj(100), _max_nrj(100), _lvl(1), _melee_att(30), _ranged_att(20), _armor_red(5)
{
	std::cout << MAGENTA << "Default constructor is called. Here we'r go !" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << MAGENTA << "Constructor is called. " << BOLDCYAN << name << MAGENTA << " is going to smash everything !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Copy constructor is called. Hi I'm a copy, I am not unique... Snif... I can not cry..." << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << CYAN << "Deconstructor is called. Call me Titanos Terminatorus !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "You don't see me, but I do... FR4G-TP " << this->_name << " attacks " << target << " at ranged, causing" << this->_ranged_att << "points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ich, Ich free fight ! FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_att << " points of damage !" <<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 25)
	{
		this->_hit -= 25;
		std::cout << "Oh no ! FR4G-TP " << BOLDCYAN << this->_name << " takes " << BOLDRED << amount << " points of damage ! Hold on !" << std::endl;
	}
	else
	{
		std::cout << this->_name << "it is too weak to inflict damage, so " << this->_name << "dies... :'(" <<std::endl;
		return;
	}
}

void	FragTrap::cryoAttack(std::string const & target)
{
	std::cout << BLUE << "Glagalgla ! FR4G-TP " << BOLDBLUE << this->_name << BLUE << " attacks " << target << " at cryoattack, causing 15 points of damage !" << std::endl;
}

void	FragTrap::exploAttack(std::string const & target)
{
	std::cout << RED << "Glagalgla ! FR4G-TP " << BOLDRED << this->_name << RED << " attacks " << target << " at cryoattack, causing 15 points of damage !" << std::endl;
}

void	FragTrap::electricAttack(std::string const & target)
{
	std::cout << YELLOW << "Glagalgla ! FR4G-TP " << BOLDYELLOW << this->_name << YELLOW << " attacks " << target << " at cryoattack, causing 15 points of damage !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << "Pfiouuff , FR4G-TP " << BOLDCYAN << this->_name << GREEN << " just take a little breath... " << BOLDGREEN << amount << YELLOW << " extra points for Gryffindor ! You got the POWER !!" << std::endl;
	this->_nrj += amount;
	if (this->_nrj > this->_max_nrj)
		this->_nrj = this->_max_nrj;
	if (this->_hit > this->_max_hit)
		this->_hit = this->_max_hit;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int i;

	i = rand() % 5;
	if (this->_nrj > 25)
	{
		std::cout << BOLDWHITE << this->_name << "effect a semi-random attack on the " << target << " -> ";
		this->_nrj -= 25;
		if (i == 1)
			rangedAttack(target);
		if (i == 2)
			meleeAttack(target);
		if (i == 3)
			cryoAttack(target);
		if (i == 4)
			exploAttack(target);
		if (i == 5)
			electricAttack(target);
	}
}