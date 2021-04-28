/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 16:08:32 by lryst             #+#    #+#             */
/*   Updated: 2021/04/28 17:19:43 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _hit(100), _max_hit(100), _nrj(100), _max_nrj(100), _lvl(1), _melee_att(30), _ranged_att(20), _armor_red(5)
{
	std::cout << "Default constructor is called. FragTrap, here we'r go : " << "\"Hie ! I'm level " << this->_lvl << "\"" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrj = 100;
	this->_max_nrj = 100;
	this->_lvl = 1;
	this->_melee_att = 30;
	this->_ranged_att = 20;
	this->_armor_red = 5;
	std::cout << "Constructor is called. " << BOLDWHITE << name  << RESET << " is going to smash everything !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Copy constructor is called. Hi I'm a copy, I am not unique... Snif... I can not cry..." << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor is called. Call me Titanos Terminatorus !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "You don't see me, but I do... FR4G-TP " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at ranged, causing " << this->_ranged_att << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ich, Ich free fight ! FR4G-TP " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at melee, causing " << this->_melee_att << " points of damage !" <<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hit >= amount)
	{
		this->_hit -= amount;
		std::cout << "Oh no ! FR4G-TP " << this->_name << " takes " << amount << " points of damage ! Hold on !" << std::endl;
	}
	else
	{
		std::cout << this->_name << "it is too weak to inflict damage" << std::endl;
		return;
	}
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

void	FragTrap::beRepaired(unsigned int amount)
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