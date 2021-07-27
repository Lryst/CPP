/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:57:35 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 14:16:40 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	  private :
		  Brain *_brain;
    
    public :
        Dog();
        Dog(Dog const & cpy);
        Dog const & operator=(Dog const & src);
        ~Dog();

        void	makeSound() const;
};

#endif