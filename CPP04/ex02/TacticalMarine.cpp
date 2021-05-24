/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:14:21 by lryst             #+#    #+#             */
/*   Updated: 2021/05/24 16:56:35 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & cpy)
{
	*this = cpy;
}

TacticalMarine   & TacticalMarine::operator=(TacticalMarine const & src)
{
	(void) src;
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *nv = new TacticalMarine;
	return (nv);
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
	return ;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter " << std::endl;
	return ;
}

void 	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return ;
}