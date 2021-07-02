/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:21:10 by lryst             #+#    #+#             */
/*   Updated: 2021/06/29 10:28:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Truchmuch");

    a.attack("a tree");
    b.takeDamage(3);
    a.takeDamage(2);
    b.attack("butterfly");
    b.beRepaired(5);
    a.beRepaired(4);
}