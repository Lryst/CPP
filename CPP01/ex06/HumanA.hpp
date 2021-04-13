/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:17:48 by lryst             #+#    #+#             */
/*   Updated: 2021/04/13 17:13:57 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"

class	HumanA
{
	private :
		const std::string _name;
		const Weapon &_weaponA;
	public :
		HumanA(std::string name, const Weapon &weapon);
		~HumanA();
		void	attack();
		std::string	getName();
};

#endif