/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:53:34 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 11:19:17 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H
# include <iostream>
# include <string>

class Victim
{
	protected :
		Victim();
		std::string _name;

	public :
		Victim(std::string name);
		Victim(Victim const & cpy);
		Victim & operator=(Victim const & src);
		~Victim();

		std::string	getname();
        virtual void    getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & o, Victim & ret);

#endif