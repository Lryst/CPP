/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:21:10 by lryst             #+#    #+#             */
/*   Updated: 2021/07/01 11:21:20 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Truchmuch");
    ScavTrap c;
    ScavTrap d("Courgette");
    FragTrap e;
    FragTrap f("HRP1");
    DiamondTrap g;
    DiamondTrap h("Patate Girl");

    a.attack("a tree");
    b.takeDamage(3);
    a.takeDamage(2);
    b.attack("butterfly");
    b.beRepaired(5);
    a.beRepaired(4);

    c.attack("a tree");
    d.takeDamage(20);
    c.takeDamage(25);
    d.attack("butterfly");
    d.beRepaired(50);
    c.beRepaired(40);
    d.guardGate();
    c.guardGate();

    e.attack("a tree");
    f.takeDamage(50);
    e.takeDamage(60);
    f.attack("butterfly");
    f.beRepaired(10);
    e.beRepaired(30);
    e.highFivesGuys();
    f.highFivesGuys();

    g.attack("a tree");
    h.takeDamage(50);
    g.takeDamage(60);
    h.attack("butterfly");
    h.beRepaired(10);
    g.beRepaired(30);
    g.highFivesGuys();
    h.highFivesGuys();
    g.guardGate();
    h.guardGate();
}