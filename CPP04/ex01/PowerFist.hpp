/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:56:18 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:03:43 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    private :

    public:
        PowerFist();
        PowerFist(PowerFist const & cpy);
        PowerFist & operator=(PowerFist const & src);
        virtual ~PowerFist();
		
        virtual void attack() const;
};

#endif