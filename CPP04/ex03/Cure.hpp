/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:47 by lryst             #+#    #+#             */
/*   Updated: 2021/05/31 12:01:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
    private :

    public :
        Cure();
        Cure(Cure const & cpy);
        Cure & operator=(Cure const & src);
        ~Cure();

        virtual AMateria* clone() const;
};

#endif