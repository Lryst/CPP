/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:38:25 by lryst             #+#    #+#             */
/*   Updated: 2021/04/05 16:22:05 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

class	Pony
{
	private :
		std::string _name;
		std::string _color;
		std::string	_age;
	public :
		Pony(std::string name) : _name(name)
		{
			std::cout << "Pony " << this->_name << "is created" << std:: endl;
		}
		~Pony()
		{
			std::cout << "Pony " << this->_name << "is delete" << std::endl;
		}
		std::string	get_color();
		std::string get_age();
		void set_color(std::string color);
		void set_age(std::string age);
};

#endif