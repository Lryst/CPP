/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:13:30 by lryst             #+#    #+#             */
/*   Updated: 2021/05/24 16:58:59 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	this->setUnity(NULL);
	this->setCount(0);
	return ;
}

Squad::Squad(Squad const & cpy)
{
	*this = cpy;
}

Squad   & Squad::operator=(Squad const & src)
{
	this->_count = src._count;
	this->_unity = src._unity;
	return *this;
}

Squad::~Squad()
{
	int i;

	i = 0;
	while (i < this->_count)
	{
		delete this->_unity[i];
		i++;
	}
}

void    Squad::setCount(int nbr)
{
	this->_count = nbr;
}

int     Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine * Squad::getUnit(int i) const
{
	if (i >= this->_count)
		return NULL;
	return (this->_unity[i]);
}

void Squad::setUnity(ISpaceMarine **new_unit)
{
	this->_unity = new_unit;
}

ISpaceMarine ** Squad::getUnity() const
{
	return (this->_unity);
}

int     Squad::push(ISpaceMarine *src)
{
	int i;
	ISpaceMarine        **new_squad;

	i = 0;
	if (src == NULL)
		return (this->_count);
	while (i < this->_count)
		i++;
	if (this->getUnit(i) == src)
		return (this->_count);
	if (!(new_squad = new ISpaceMarine*[this->getCount() + 1]))
		return (-1);
	i = 0;
	while (i < this->_count)
	{
		new_squad[i] = this->getUnit(i);
		i++;
	}
	new_squad[i] = src;
	delete[] this->_unity;
	this->setCount(this->getCount() + 1);
	this->setUnity(new_squad);
	return (this->_count);
}