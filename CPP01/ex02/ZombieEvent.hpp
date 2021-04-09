/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:14:03 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 17:03:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	private :
		std::string _name;
		std::string _type;
	public :
		void	setZombieType(std::string type);
		
	Zombie *newZombie(std::string name);
	void	randomChump();
};

#endif
