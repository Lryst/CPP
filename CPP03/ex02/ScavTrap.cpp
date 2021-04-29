/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:39:32 by lryst             #+#    #+#             */
/*   Updated: 2021/04/29 14:36:07 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : _name(name)
{
	this->_hit = 100;
	this->_max_hit = 100;
	this->_nrj = 50;
	this->_max_hit = 50;
	this->_lvl = 1;
	this->_melee_att = 20;
	this->_ranged_att = 15;
	this->_armor_red = 3;
	std::cout << "Constructor is called. A new ScavTrap is born, his name ? " << BOLDWHITE << this->_name << RESET << std::endl;
}

ScavTrap::ScavTrap() : _hit(100), _max_hit(100), _nrj(50), _max_nrj(50), _lvl(1), _melee_att(20), _ranged_att(15), _armor_red(3)
{
	std::cout << "Default constructor is called. ScavTrap, let's go : " << "\"Hie ! I'm level " << this->_lvl << "\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "Copy constructor is called. Hi I'm a copy ScavTrap, I am not unique... I can not believe it..." << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor is called. Bye bye ScavTrap !" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "You don't see me, but I do... SC4V-TP " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at ranged, causing " << this->_ranged_att << " points of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ich, Ich free fight ! SC4V-TP " << BOLDWHITE << this->_name << RESET << " attacks " << target << " at melee, causing " << this->_melee_att << " points of damage !" <<std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hit >= amount)
	{
		this->_hit -= amount;
		std::cout << "Oh no ! SC4V-TP " << this->_name << " takes " << amount << " points of damage ! Hold on !" << std::endl;
	}
	else
	{
		std::cout << this->_name << "it is too weak to inflict damage" << std::endl;
		return;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_nrj < this->_max_nrj || this->_hit < this->_max_hit)
	{
		std::cout << CYAN << "Arff , SC4V-TP " << BOLDCYAN << this->_name << RESET << CYAN << " I take a little pick-me-up... " << amount << " ,I am a rising star!!" << RESET << std::endl;
		this->_hit += amount;
		if (this->_hit > this->_max_hit)
			this->_hit = this->_max_hit;
		this->_nrj += amount;
		if (this->_nrj > this->_max_nrj)
			this->_nrj = this->_max_nrj;
	}
	else
		std::cout << "Youhouhou, " << this->_name << " is at the max ! Let's go !" << RESET << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	int i;

	i = rand() % 5;
	std::string tab_challenge [5] = {"This time it's the correct one. Use moon stones on the crusher.", "Explosive Exit Kill enemies with explosive damage.", "A purer green than the emerald Find or buy green items.", "find ClapTrap's missing eye and return it, welcome to Pandora.", "Find the differents died ClapTrap, there are 3... Good Luck !"};
	std::cout << BOLDRED << this->_name << RESET << RED << " chooses a random challenge... And the challenge is ... -> " << RESET;
		this->_nrj -= (25 - this->_armor_red);
		if (i == 0)
			std::cout << MAGENTA << tab_challenge[0] << RESET << std::endl;
		if (i == 1)
			std::cout << BLUE << tab_challenge[0] << RESET << std::endl;
		if (i == 2)
			std::cout << YELLOW <<tab_challenge[0] << RESET << std::endl;
		if (i == 3)
			std::cout << CYAN << tab_challenge[0] << RESET << std::endl;
		if (i == 4)
			std::cout << GREEN << tab_challenge[0] << RESET << std::endl;
}