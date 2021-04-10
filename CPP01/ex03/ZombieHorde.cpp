/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:46:40 by lryst             #+#    #+#             */
/*   Updated: 2021/04/10 14:40:24 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    int u;

    u = -1;
    this->tab_zombie = new Zombie[n];
    while (++u < n)
    {
        std::string tab_name [5] = {"Courgette", "Frederick", "Patate Girl", "Roberta", "Brutus"};
        std::string tab_type [4] = {"middle ugly","One eyes", "Shopaholic", "Trunk"};
        tab_zombie[u] = Zombie(tab_name[rand() % 5], tab_type[rand() % 4]);
        tab_zombie[u].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->tab_zombie;
}