/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fairy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 11:24:07 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 11:30:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FAIRY_H
# define FAIRY_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Fairy : public Victim
{
	private :
		Fairy();
		
	public :
		Fairy(std::string name);
		Fairy(Fairy const & cpy);
		Fairy & operator=(Fairy const & src);
		~Fairy();

		std::string	getname();
        void    getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Fairy & ret);

#endif