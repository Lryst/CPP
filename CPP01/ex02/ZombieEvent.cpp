/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:32:06 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 14:29:19 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::newZombie(std::string name)
{
	this->_name = name;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}