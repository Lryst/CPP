/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:33:06 by lryst             #+#    #+#             */
/*   Updated: 2021/07/27 18:54:21 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
    protected :
        std::string type;
    
    public :
        Animal();
        Animal(Animal const & cpy);
        Animal const & operator=(Animal const & src);
        virtual ~Animal();
        
        std::string getType() const;
        void        makeSound() const = 0;
};

#endif