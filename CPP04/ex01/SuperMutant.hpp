/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:48:00 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:34:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    private :

    public:
        SuperMutant();
        SuperMutant(SuperMutant const & cpy);
        SuperMutant & operator=(SuperMutant const & src);
		
        virtual ~SuperMutant();
		virtual void	takeDamage(int hurt);
};

#endif