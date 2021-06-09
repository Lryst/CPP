/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:01:25 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 17:58:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i;
    
    i = 0;
    while (i < 4)
        this->_invent[i++] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (cpy._invent[i] != NULL)
            this->_invent[i] = cpy._invent[i];
        else
            this->_invent[i] = NULL;
        i++;
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    int i;
    i = 0;

    while (i < 4)
    {
        if (src._invent[i] != NULL)
            this->_invent[i] = src._invent[i];
        else
            this->_invent[i] = NULL;
        i++;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (this->_invent[i] != NULL)
			delete this->_invent[i];
		i++;
	}
}

void    MateriaSource::learnMateria(AMateria *src)
{
    int i;

    i = 0;
    while (this->_invent[i] != NULL)
        i++;
    if (i < 4)
        this->_invent[i] = src;
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->_invent[i]->getType() == type)
            return this->_invent[i]->clone();
        i++;
    }
    return NULL;
}