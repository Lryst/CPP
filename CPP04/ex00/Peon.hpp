/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:12 by lryst             #+#    #+#             */
/*   Updated: 2021/07/08 14:59:29 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
# include "Victim.hpp"
# include <iostream>
# include <string>

class Peon : public Victim
{
	private :
		Peon();
		
	public :
		Peon(std::string name);
		Peon(Peon const & cpy);
		Peon & operator=(Peon const & src);
		virtual ~Peon();

		std::string	getname();
        void    getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Peon & ret);

#endif