/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42f.r>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:13:56 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 15:44:48 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include <cstdlib>

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* kevin = new AssaultTerminator;
	ISpaceMarine* mbappe = new TacticalMarine;
	ISpaceMarine* incognito = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	
	ISquad* team = new Squad;
	
	
	vlc->push(bob);
	vlc->push(jim);
	exit(1);
	team = vlc;
	delete vlc;

	team->push(kevin);
	team->push(mbappe);
	team->push(incognito);
	
	for (int i = 0; i < team->getCount(); ++i)
	{
		ISpaceMarine* cur = team->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete team;
	return 0;
}