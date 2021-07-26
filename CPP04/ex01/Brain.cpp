/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:48:47 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 14:19:59 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(Brain const & cpy)
{
	this->_ideas = cpy._ideas;
}

Brain const & Brain::operator=(Brain const & src)
{
	this->_ideas = src._ideas;
	return *this;
}

Brain::~Brain() {}