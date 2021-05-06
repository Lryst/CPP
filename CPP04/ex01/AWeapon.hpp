/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:50:03 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 16:36:17 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H
# include <iostream>
# include <string>

class AWeapon
{
    protected:
        AWeapon();

        std::string _name;
        int    _apcost;
        int    _dam;
        
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const & cpy);
        AWeapon & operator=(AWeapon const & src);
        virtual ~AWeapon();
        
        std::string const & getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif