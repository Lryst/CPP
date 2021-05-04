/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:39:32 by lryst             #+#    #+#             */
/*   Updated: 2021/04/30 13:30:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3, "DefaultScavTrap")
{
	std::cout << YELLOW << "Default constructor is called. ScavTrap, here we'r go !" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5, name)
{
	std::cout << YELLOW << "Constructor is called. A new ScavTrap is born, his name ? " << BOLDYELLOW << this->_name << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "Copy constructor is called. Hi I'm a copy ScavTrap, I am not unique... I can not believe it..." << std::endl;
	*this = cpy;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
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

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor is called. Bye bye " << BOLDGREEN << this->_name << RESET << " SC4V-TP !" << std::endl;
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