/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:55:54 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 17:53:28 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"


int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	
	me->equip(pr);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	
	return 0;
}