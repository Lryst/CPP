/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:17:25 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 17:36:09 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :  _name(name){}


void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << *this->_weaponB << std::endl;
}