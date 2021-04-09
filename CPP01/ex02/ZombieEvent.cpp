/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:32:06 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 17:09:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie  *zombie2 = new Zombie(name, this->_type);
    return (zombie2);
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

void    ZombieEvent::randomChump()
{
    std::string tab_name [5] = {"Courgette", "Frederick", "Patate Girl", "Roberta", "Brutus"};
    std::string tab_type [4] = {"middle ugly","One eyes", "Shopaholic", "Trunk"};
    Zombie  *zombie2 = new Zombie(tab_name[rand() % 5], tab_type[rand() % 4]);
    zombie2->announce();
    delete zombie2;
}