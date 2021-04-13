/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:30:58 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 18:00:05 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
    private :
        const   std::string _name;
        Weapon  *_weaponB;
    public :
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        std::string getName();
        void    setWeapon(Weapon &weap);
          
};

#endif