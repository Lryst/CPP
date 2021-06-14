/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:59 by lryst             #+#    #+#             */
/*   Updated: 2021/06/14 12:10:21 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand (time(NULL));
	
	std::string const tab_target [3] = {"moving target", "static target", "far target"};
	
	/* std::cout << "\n------------------------------------------------------------------" << std::endl;
	std::cout << "                             FRAGTRAP                             " << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	
	FragTrap a("R2D2");
	FragTrap abis;
	FragTrap b("Truchmuch");
	FragTrap bbis;
	FragTrap c("HRP1");
	FragTrap cbis;
	std::cout << "------------------------------------------------------------------" << std::endl;
	
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
 */
	std::cout << "\n\n------------------------------------------------------------------" << std::endl;
	std::cout << "                             NINJATRAP                            " << std::endl;
	std::cout << "------------------------------------------------------------------\n" << std::endl;

	ClapTrap g;
	ClapTrap h;
	ClapTrap i;
	ClapTrap j;
	ClapTrap k;
	ClapTrap l;

	FragTrap g2;
	FragTrap h2("Morue");
	ScavTrap i2;
	ScavTrap j2("Atomisator");
	NinjaTrap k2;
	NinjaTrap l2("Donatello");
	SuperTrap m;
	SuperTrap n("Turbogosse");

	g = g2;
	h = h2;
	i = i2;
	j = i2;
	k = k2;
	l = l2;
	
	std::cout << std::endl;

	j2.rangedAttack(tab_target[rand() % 3]);
	j2.rangedAttack(tab_target[rand() % 3]);
	j2.rangedAttack(tab_target[rand() % 3]);
	j2.rangedAttack(tab_target[rand() % 3]);
	j2.rangedAttack(tab_target[rand() % 3]);
	j2.rangedAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	j2.challengeNewcomer();
	std::cout << std::endl;

	i2.meleeAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	j2.challengeNewcomer();
	std::cout << std::endl;

	i2.challengeNewcomer();
	std::cout << std::endl;

	j2.challengeNewcomer();
	std::cout << std::endl;
	
	i2.challengeNewcomer();
	std::cout << std::endl;
	
	i2.beRepaired(50);
	std::cout << std::endl;
	
	i2.takeDamage(50);
	i2.takeDamage(51);
	i2.beRepaired(100);
	i2.beRepaired(10);
	i2.takeDamage(20);

	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	h2.rangedAttack(tab_target[rand() % 3]);
	h2.rangedAttack(tab_target[rand() % 3]);
	h2.rangedAttack(tab_target[rand() % 3]);
	h2.rangedAttack(tab_target[rand() % 3]);
	h2.rangedAttack(tab_target[rand() % 3]);
	h2.rangedAttack(tab_target[rand() % 3]);
	std::cout << std::endl;

	h2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;

	g2.beRepaired(50);
	std::cout << std::endl;
	
	g2.vaulthunter_dot_exe(tab_target[rand() % 3]);
	std::cout << std::endl;
	
	h2.takeDamage(50);
	h2.takeDamage(51);
	h2.beRepaired(100);
	h2.beRepaired(10);
	h2.takeDamage(20);
	std::cout << std::endl;

	l2.ninjaShoebox(h2);
	k2.ninjaShoebox(j2);
	l2.ninjaShoebox(k2);
	
	m.ninjaShoebox(g2);
	n.ninjaShoebox(j2);
	m.vaulthunter_dot_exe((tab_target[rand() % 3]));
	m.rangedAttack(tab_target[rand() % 3]);
	n.meleeAttack(tab_target[rand() % 3]);
	m.takeDamage(100);
	m.takeDamage(50);
	m.beRepaired(200);
	
}