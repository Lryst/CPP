/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:35:25 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 17:01:14 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " " << this->_type << ">" << " Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::set_type(std::string type)
{
	this->_type = type;
}

Zombie::~Zombie()
{
}

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}