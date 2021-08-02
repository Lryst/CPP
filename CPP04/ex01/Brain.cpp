/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:48:47 by lryst             #+#    #+#             */
/*   Updated: 2021/08/01 14:15:15 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain call" << std::endl;
}

Brain::Brain(Brain const & cpy)
{
	std::cout << "Copy Constructor Brain call" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
}

Brain const & Brain::operator=(Brain const & src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain call" << std::endl;
}