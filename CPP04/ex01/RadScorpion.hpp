/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:01:12 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 18:02:29 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPIONT_H
# define RADSCORPIONT_H
# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy
{
    private :

    public:
        RadScorpion();
        RadScorpion(RadScorpion const & cpy);
        RadScorpion & operator=(RadScorpion const & src);
		virtual ~RadScorpion();
};

#endif