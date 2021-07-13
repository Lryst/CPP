/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:01:53 by lryst             #+#    #+#             */
/*   Updated: 2021/07/08 15:29:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name) : _name(name), _ap(40)
{
}

Character::Character(Character const & cpy)
{
	*this = cpy;
}

Character & Character::operator=(Character const & src)
{
	this->_ap = src._ap;
	this->_name = src._name;
	this->_arm = src._arm;
	return (*this);
}

Character::~Character()
{
}

void	Character::recoverAP()
{
	if (this->_ap + 10 >= 40)
		this->_ap = 40;
	else
		this->_ap += 10;
	return ;
}

void	Character::equip(AWeapon * arm)
{
	this->_arm = arm;
}

void	Character::attack(Enemy * bad)
{
	if (bad->getHP() == 0)
		return ;
	if (bad && this->_arm && this->_ap > this->_arm->getAPCost())
	{
		std::cout << this->getName() <<  " attacks " << bad->getType() << " with a " << this->_arm->getName() << std::endl;
		this->_arm->attack();
		this->_ap -= this->_arm->getAPCost();
		bad->takeDamage(this->_arm->getDamage());
		if (bad->getHP() == 0)
			delete bad;
	}
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

AWeapon * Character::getWeapon()
{
	return (this->_arm);
}

int		Character::getAp()
{
	return (this->_ap);
}

std::ostream & operator<<(std::ostream & o, Character & ret)
{
	
	if (ret.getWeapon())
	{
    	o << ret.getName() << " has " << ret.getAp() << " AP and wields a " << ret.getWeapon()->getName() << std::endl;
	}
    else
	{
		o << ret.getName() << " has " << ret.getAp() << " AP and is unarmed" << std::endl;
	}
    return o;
}