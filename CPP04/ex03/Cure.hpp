/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:47 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 14:34:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
    private :
        std::string _type;

    public :
        Cure();
        Cure(Cure const & cpy);
        Cure & operator=(Cure const & src);
        ~Cure();

        virtual AMateria* clone() const;
};

#endif