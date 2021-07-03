/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42f.r>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:13:30 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 15:42:20 by lryst            ###   ########.fr       */
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
	int i;

	i = 0;
	if (this->_unity)
	{
		while (i++ < this->_count)
			delete this->_unity[i];
		delete [] this->_unity;
	}
	i = 0;
	this->_count = cpy._count;
	this->_unity = new ISpaceMarine*[this->_count];
	while (i < this->_count)
	{
		this->_unity[i] = cpy._unity[i]->clone();
		i++;
	}
}

Squad   & Squad::operator=(Squad const & src)
{
	int i;

	i = 0;
	if (this->_unity)
	{
		while (i < this->_count)
			delete this->_unity[i++];
		delete [] this->_unity;
	}
	i = 0;
	this->_count = src._count;
	this->_unity = new ISpaceMarine*[this->_count];
	while (i < this->_count)
	{
		this->_unity[i] = src._unity[i]->clone();
		i++;
	}
	return *this;
}

Squad::~Squad()
{
	int i;

	i = 0;
	while (i < this->_count)
	{
		delete this->_unity[i++];
		//i++;
	}
	delete [] this->_unity;
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
		new_squad[i] = this->_unity[i];
		i++;
	}
	new_squad[i] = src;
	delete[] this->_unity;
	this->setCount(this->getCount() + 1);
	//this->setUnity(new_squad);
	return (this->_count);
}