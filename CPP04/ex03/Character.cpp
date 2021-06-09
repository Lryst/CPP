/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:35 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 17:09:34 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		this->_materia[i] = NULL;
		i++;
	}
}

Character::Character(std::string const & name) : _name(name)
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		this->_materia[i] = NULL;
		i++;
	}
}

Character::Character(Character const & cpy)
{
	int i;

	i = 0;
	this->_name = cpy._name;
	while (i < 4)
	{
		if (cpy._materia[i] != NULL)
			this->_materia[i] = cpy._materia[i]->clone();
		else
			this->_materia[i] = NULL;
		i++;
	}
}

Character & Character::operator=(Character const & src)
{
	int i;

	i = 0;
	this->_name = src._name;
	while(i < 4)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
		i++;
	}
	return *this;
}

Character::~Character()
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (this->_materia[i] != NULL)
		i++;
	if( i < 4)
		this->_materia[i] = m;
	return ;
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
	{
		this->_materia[idx] = NULL;
	}
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx > -1)
		this->_materia[idx]->use(target);
}