/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 10:27:47 by lryst             #+#    #+#             */
/*   Updated: 2021/07/08 15:29:26 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"


int main()
{
	//Character* me = new Character("me");
	Character* robert = new Character("Robert");
	//std::cout << *me;
	std::cout << *robert;
	
	//Enemy* s = new SuperMutant();
	Enemy* s = new RadScorpion();
	AWeapon* pf = new PlasmaRifle();
	//AWeapon* pf = new PowerFist();
	
	//me->equip(pr);
	//std::cout << *me;

	robert->attack(s);
	
	robert->equip(pf);
	robert->attack(s);
	robert->attack(s);
	robert->attack(s);
	robert->attack(s);
	robert->attack(s);
	robert->attack(s);
	
	/* robert->recoverAP();
	robert->attack(s);
	robert->attack(s);
	robert->attack(s);
	robert->recoverAP();
	robert->equip(pr); */
	//robert->attack(s);
	//robert->attack(s);
	/* me->equip(pf);
	me->attack(b);
	std::cout << *me;
	
	me->equip(pr);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me; */
	
	
	
	return 0;
}