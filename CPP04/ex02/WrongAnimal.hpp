/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:06:39 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 13:45:37 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	private :
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const & cpy);
		WrongAnimal const & operator=(WrongAnimal const & src);
		~WrongAnimal();

		std::string getType() const;
		void		makeSound() const;
};

#endif