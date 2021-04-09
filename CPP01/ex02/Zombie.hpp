/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:35:21 by lryst             #+#    #+#             */
/*   Updated: 2021/04/09 14:19:48 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <cstdlib>

class Zombie
{
	private :
		std::string _name;
		std::string _type;
	public :
		void	announce();
		void	set_name(std::string name);
		void	set_type(std::string type);
		std::string	get_name();
};

#endif