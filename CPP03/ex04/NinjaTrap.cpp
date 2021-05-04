/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:11:08 by lryst             #+#    #+#             */
/*   Updated: 2021/05/03 15:19:44 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, "DefaultNinjaTrap")
{
	std::cout << BLUE << "NinjaTrap Default constructor is called. Again,and again..." << "\"Hello ! I'm level " << this->_lvl << "\"" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0, name)
{
	std::cout << BLUE << "NinjaTrap Constructor is called. What's your are ? " << BOLDBLUE << name << " ! And I'm the best Robot." << RESET << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & cpy)
{
	std::cout << "Copy NinjaTrap constructor is called." << std::endl;
	*this = cpy;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
{
	std::cout << "NinjaTrap Assignation operator called" << std::endl;
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Deconstructor is called ! Goodbye" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap & target)
{
    std::cout << BOLDMAGENTA << this->_name << RESET << MAGENTA << " : Cowabunga ! NinjaTrap SPECIAL ATTACK !! " << BOLDMAGENTA << target.GetName() << RESET << MAGENTA << ", I toke your nose hihi." << RESET << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap & target)
{
    std::cout << BOLDMAGENTA << this->_name << RESET << MAGENTA << " : AAaaaaaaaahh High kick returns in your robot face " << BOLDMAGENTA << target.GetName() << RESET << MAGENTA << " !" << RESET << std::endl;
}

void    NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
    std::cout << BOLDMAGENTA << this->_name << RESET << MAGENTA << "Toc, toc ! Who's there ? NINJATRAP BANANA ! Oh it's you, " << BOLDMAGENTA << target.GetName() << RESET << MAGENTA << ", hello my friend ;)" << RESET << std::endl;
}

unsigned int	NinjaTrap::GetEnergy()
{
	return (120);
}

unsigned int	NinjaTrap::GetMaxEnergy()
{
	return (120);
}

unsigned int	NinjaTrap::GetMeleeAttack()
{
	return (60);
}