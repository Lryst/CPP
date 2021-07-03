/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:48:01 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 18:50:52 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & cpy)
{
	*this = cpy;
}

AssaultTerminator   & AssaultTerminator::operator=(AssaultTerminator const & src)
{
	(void) src;
	return *this;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *nv = new AssaultTerminator;
	return (nv);
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return ;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void 	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}
