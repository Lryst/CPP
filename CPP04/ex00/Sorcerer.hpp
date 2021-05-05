/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:23 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 11:55:55 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"
# include "Fairy.hpp"

class Sorcerer
{
	private :
		Sorcerer();
		std::string _name;
		std::string _title;

	public :
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & cpy);
		Sorcerer & operator=(Sorcerer const & src);
		~Sorcerer();

		std::string	getname();
		std::string	gettitle();
		void	polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer & ret);

#endif