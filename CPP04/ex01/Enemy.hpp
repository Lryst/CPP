/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:28:14 by lryst             #+#    #+#             */
/*   Updated: 2021/05/06 17:34:09 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
# include <string>

class Enemy
{
	protected :
		int	_hp;
		std::string	_type;

	public :
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & cpy);
        Enemy & operator=(Enemy const & src);
		virtual ~Enemy();
        
		std::string const & getType() const;
		int getHP() const;
		virtual void takeDamage(int hurt);
};
		
#endif