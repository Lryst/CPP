/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:28:23 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 17:32:57 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & cpy)
{
    *this = cpy;
}

Enemy & Enemy::operator=(Enemy const & src)
{
    this->_hp = src._hp;
    this->_type = src._type;
    return *this;
}

Enemy::~Enemy()
{
}

std::string const & Enemy::getType() const
{
    return (this->_type);
}

int Enemy::getHP() const
{
    return (this->_hp);
}

void	Enemy::takeDamage(int hurt)
{
	if ((this->getHP() - hurt) < 0)
		this->_hp = hurt;
	else
	{
		this->_hp -= hurt;
	}
	return ;
}
