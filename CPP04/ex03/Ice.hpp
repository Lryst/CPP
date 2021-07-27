/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:21:58 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 14:34:09 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
    private :
        std::string _type;
        
    public :
        Ice();
        Ice(Ice const & cpy);
        Ice & operator=(Ice const & src);
        ~Ice();

        virtual AMateria* clone() const;
};

#endif