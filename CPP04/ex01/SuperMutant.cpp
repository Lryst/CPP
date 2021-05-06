/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:47:43 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:34:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & cpy)
{
    *this = cpy;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & src)
{
    this->_hp = src._hp;
    this->_type = src._type;
    return *this;
}

SuperMutant::~SuperMutant()
{
   std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int hurt)
{
	if ((this->getHP() - (hurt - 3)) < 0)
		this->_hp = 0;
	else
	{
		this->_hp -= (hurt - 3);
	}
	return ;
}