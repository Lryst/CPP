/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:14:03 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 14:30:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include <cstdlib>

class ZombieEvent
{
	private :
		std::string _name;
		std::string _type;
	public :
		void	newZombie(std::string name);
		void 	*newZombie(std::string name);
};

#endif
