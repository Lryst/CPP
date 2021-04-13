/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:44:38 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 12:18:09 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H 
# define HUMAN_H
# include "Brain.hpp"
# include <iostream>
# include <sstream>

class Human
{
    private :
        Brain const  brain1;
    public :
        std::string & getBrain();
        std::string identify();
};

#endif