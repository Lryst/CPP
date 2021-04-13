/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:17:48 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 16:42:10 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private :
		std::string _name;
		Weapon _weaponA;
	public :
		HumanA(std::string name, Weapon _weaponA);
		~HumanA();
		void	attack();
		void	setName(std::string name);
		std::string	getName();
};

#endif