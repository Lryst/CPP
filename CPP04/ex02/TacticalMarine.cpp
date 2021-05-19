/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:14:21 by lryst             #+#    #+#             */
/*   Updated: 2021/05/19 15:56:03 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    
}

TacticalMarine::TacticalMarine(TacticalMarine const & cpy)
{
    
}

TacticalMarine   & TacticalMarine::operator=(TacticalMarine const & src)
{
    
}

TacticalMarine::~TacticalMarine()
{
    
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine *nv = new ISpaceMarine();
}