/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:40:33 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 14:46:24 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain &Human::getBrain()
{
	return (_brain1);
}

std::string	Human::identify() const
{
	return (_brain1.identify());
}