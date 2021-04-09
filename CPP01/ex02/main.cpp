/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:35:41 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 17:12:36 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    srand (time(NULL));
    
    ZombieEvent event;
    event.setZombieType("good");
    event.randomChump();
    Zombie *zombie1;
    
    zombie1 = event.newZombie("Quimera");
    zombie1->announce();

    delete zombie1;
    
}