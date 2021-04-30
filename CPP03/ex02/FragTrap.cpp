/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:08:32 by lryst             #+#    #+#             */
/*   Updated: 2021/04/30 13:25:23 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//"\"Hie ! I'm level " << this->_lvl << "\""
FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, "DefaultFragTrap")
{
	std::cout << GREEN << "Default constructor is called. FragTrap, here we'r go !" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << GREEN << "Constructor is called. " << BOLDGREEN << name << RESET << GREEN << " is going to smash everything !" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Copy constructor is called. Hi I'm a copy, I am not unique... Snif... I can not cry..." << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor is called. " << BOLDBLUE << this->_name << RESET << " FR4G-TP will come back soon..." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
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

void	FragTrap::cryoAttack(std::string const & target)
{
	std::cout << BLUE << "Glagalgla ! FR4G-TP " << BOLDBLUE << this->_name << BLUE << " attacks " << target << " at cryoattack, causing 15 points of damage !" << RESET << std::endl;
}

void	FragTrap::exploAttack(std::string const & target)
{
	std::cout << RED << "Boum ! FR4G-TP " << BOLDRED << this->_name << RED << " attacks " << target << " at explose attack, causing 25 points of damage !" << RESET << std::endl;
}

void	FragTrap::electricAttack(std::string const & target)
{
	std::cout << YELLOW << "Sounds a shock, eh ?! FR4G-TP " << BOLDYELLOW << this->_name << YELLOW << " attacks " << target << " at electric attack, causing 25 points of damage !" << RESET << std::endl;
}

void	FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << MAGENTA << "Bang ! Bang ! FR4G-TP " << BOLDMAGENTA << this->_name << MAGENTA << " attacks " << target << " at shotgun attack, causing 25 points of damage !" << RESET << std::endl;
}

void	FragTrap::corosiveAttack(std::string const & target)
{
	std::cout << GREEN << "What do you mean ? Isn't that vegetable juice ?! FR4G-TP " << BOLDGREEN << this->_name << GREEN << " attacks " << target << " at corrosive attack, causing 25 points of damage !" << RESET << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int i;

	i = rand() % 5;
	if ((this->_nrj + this->_armor_red) > 25 && this->_nrj <= this->_max_nrj)
	{
		std::cout << BOLDWHITE << this->_name << RESET << " effect a semi-random attack on the " << target << " -> ";
		this->_nrj -= (25 - this->_armor_red);
		if (i == 0)
			this->electricAttack(target);
		if (i == 1)
			this->shotgunAttack(target);
		if (i == 2)
			this->corosiveAttack(target);
		if (i == 3)
			this->cryoAttack(target);
		if (i == 4)
			this->exploAttack(target);
	}
	else
		std::cout << "Sorry " << BOLDWHITE << this->_name << RESET << " does not have enough energy to make this attack..." << std::endl;
}