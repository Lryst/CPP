/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:38:25 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 18:39:35 by lryst            ###   ########.fr       */
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
		Pony(std::string name) : _name(name) {}
		~Pony(){}
		std::string get_name();
		std::string	get_color();
		std::string get_age();
		void set_color(std::string color);
		void set_age(std::string age);
};

#endif