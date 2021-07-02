/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:00:14 by lryst             #+#    #+#             */
/*   Updated: 2021/07/02 12:01:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "Default ClapTrap";
	this->_hit = 100;
	this->_nrj = 100;
	this->_dam = 30;
	std::cout << YELLOW << "Default constructor is called. Here we'r go" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit = 100;
	this->_nrj = 100;
	this->_dam = 30;
	std::cout << YELLOW << "Constructor is called. " << name << " is going to smash everything !" << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << YELLOW << "Copy constructor is called. Hi I'm a copy, I am not unique... Snif... I can not cry..." << RESET << std::endl;
	*this = cpy;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	std::cout << YELLOW << "FragTrap Assignation operator called" << RESET << std::endl;
	this->_hit = src._hit;
	this->_nrj = src._nrj;
    this->_dam = src._dam;
	this->_name = src._name;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "Deconstructor is called. Call me Titanos Terminatorus !" << RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string tmp;

	std::cout << "Hi ! I'm " << this->_name << ", do you want to make a high fives with me ? Pleeeeaaase ? yes/no" << std::endl;
	std::cin >> tmp;
	if (tmp == "yes")
		std::cout << "Youhou ! Here we go ! And ... HIGH FIVES !" << std::endl;
	else if (tmp == "no")
		std::cout << "Oh... okey... I understand... Next time... Bye" << std::endl;
	else
	{
		std::cout << "Sorry bro, I don't understand what you mean. Next time, Bye !" << std::endl;
	}
	
}