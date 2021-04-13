/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:22:36 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 16:58:56 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

std::string	HumanA::getName()
{
	return (this->_name);
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

HumanA::HumanA(std::string name, Weapon weap)
{
	setName(name);
	setType(weap);
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weaponA.getType() << std::endl;
}