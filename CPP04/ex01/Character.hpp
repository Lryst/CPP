/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:02:11 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 16:25:41 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private :
		Character();
	
	protected :
		std::string	_name;
		int			_ap;
		AWeapon	* _arm;
		
	public :
		Character(std::string const & name);
		Character(Character const & cpy);
		Character & operator=(Character const & src);
		virtual ~Character();
		
		void recoverAP();
		void equip(AWeapon * arm);
		void attack(Enemy * bad);
		std::string const & getName() const;
		int  getAp();
		AWeapon * getWeapon();
};

std::ostream & operator<<(std::ostream & o, Character & ret);

#endif