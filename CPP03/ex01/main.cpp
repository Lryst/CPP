/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:21:10 by lryst             #+#    #+#             */
/*   Updated: 2021/06/29 10:54:05 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Truchmuch");
    ScavTrap c;
    ScavTrap d("Courgette");

    a.attack("a tree");
    b.takeDamage(3);
    a.takeDamage(2);
    b.attack("butterfly");
    b.beRepaired(5);
    a.beRepaired(4);

    c.attack("a tree");
    d.takeDamage(3);
    c.takeDamage(2);
    d.attack("butterfly");
    d.beRepaired(5);
    c.beRepaired(4);
    d.guardGate();
    c.guardGate();
}