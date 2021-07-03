/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42f.r>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 13:29:47 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 10:27:14 by lryst            ###   ########.fr       */
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
	
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	//exit (1);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		//exit(1);
		ISpaceMarine* cur = vlc->getUnit(i);
		//exit(1);
		cur->battleCry();
		//exit(1);
		cur->rangedAttack();
		//exit(1);
		cur->meleeAttack();
	}
	//exit(1);
	delete vlc;
	return 0;
}