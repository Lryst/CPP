/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:59:19 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:02:09 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    private :

    public:
		PlasmaRifle();
        PlasmaRifle(PlasmaRifle const & cpy);
        PlasmaRifle & operator=(PlasmaRifle const & src);
		
        virtual ~PlasmaRifle();
        virtual void attack() const;
};

#endif