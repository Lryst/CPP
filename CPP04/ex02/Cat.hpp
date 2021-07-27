/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:53:23 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 14:16:49 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *_brain;
	public :
		Cat();
		Cat(Cat const & cpy);
		Cat const & operator=(Cat const & src);
		~Cat();
};

#endif