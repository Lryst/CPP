/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:46:51 by lryst             #+#    #+#             */
/*   Updated: 2021/04/05 16:23:03 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

std::string Pony::get_color()
{
    return this->_color;
}

std::string Pony::get_age()
{
    return this->_age;
}

void    Pony::set_color(std::string color)
{
    this->_color = color;
}

void    Pony::set_age(std::string age)
{
    this->_age = age;
}
