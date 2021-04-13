/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:23:47 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 16:31:19 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
	private :
		std::string _type;
	public :
		Weapon(std::string);
		std::string const & getType() const;
		void	setType(std::string type);
};

#endif