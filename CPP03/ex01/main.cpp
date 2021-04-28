/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:59 by lryst             #+#    #+#             */
/*   Updated: 2021/04/28 18:02:46 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n------------------------------------------------------------------" << std::endl;
	std::cout << "                             FRAGTRAP                             " << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	
	FragTrap a("R2D2");
	FragTrap abis;
	FragTrap b("Truchmuch");
	FragTrap bbis;
	FragTrap c("HRP1");
	FragTrap cbis;
	std::cout << "------------------------------------------------------------------" << std::endl;
	
	std::string const tab_target [3] = {"moving target", "static target", "far target"};
	
	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	b.rangedAttack(tab_target[rand() % 3]);
	b.rangedAttack(tab_target[rand() % 3]);
	b.rangedAttack(tab_target[rand() % 3]);
	b.rangedAttack(tab_target[rand() % 3]);
	b.rangedAttack(tab_target[rand() % 3]);
	b.rangedAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	b.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	c.meleeAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	c.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	a.beRepaired(50);
	std::cout << std::endl;
	
	a.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;
	
	c.takeDamage(50);
	c.takeDamage(51);
	c.beRepaired(100);
	c.beRepaired(10);
	c.takeDamage(20);
	std::cout << std::endl;
	
	std::cout << "\n\n------------------------------------------------------------------" << std::endl;
	std::cout << "                             SCAVTRAP                             " << std::endl;
	std::cout << "------------------------------------------------------------------\n" << std::endl;
	
	ScavTrap d("Claquette93");
	ScavTrap e("Chaussette2.0");
	ScavTrap f("Tong42");
	
	d.challengeNewcomer();
	std::cout << std::endl;

	e.rangedAttack(tab_target[rand() % 3]);
	e.rangedAttack(tab_target[rand() % 3]);
	e.rangedAttack(tab_target[rand() % 3]);
	e.rangedAttack(tab_target[rand() % 3]);
	e.rangedAttack(tab_target[rand() % 3]);
	e.rangedAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	e.challengeNewcomer();
	std::cout << std::endl;

	f.meleeAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	d.challengeNewcomer();
	std::cout << std::endl;

	e.challengeNewcomer();
	std::cout << std::endl;

	f.challengeNewcomer();
	std::cout << std::endl;

	d.challengeNewcomer();
	std::cout << std::endl;

	e.challengeNewcomer();
	std::cout << std::endl;
	
	f.challengeNewcomer();
	std::cout << std::endl;
	
	f.beRepaired(50);
	std::cout << std::endl;
	
	f.takeDamage(50);
	f.takeDamage(51);
	f.beRepaired(100);
	f.beRepaired(10);
	f.takeDamage(20);
	std::cout << std::endl;
}