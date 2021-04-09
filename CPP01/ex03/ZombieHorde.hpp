/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:43:40 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 18:02:28 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include "Zombie.hpp"

class ZombieHorde
{
    private :
        Zombie *tab_zombie;
    public :
        ZombieHorde(int n);
        ~ZombieHorde();
        void    announce();
};

#endif