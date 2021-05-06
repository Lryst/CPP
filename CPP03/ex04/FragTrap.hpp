/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:58:32 by lryst             #+#    #+#             */
/*   Updated: 2021/05/04 14:10:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{	
	public :
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const & cpy);
		FragTrap & operator=(FragTrap const & src);
		virtual ~FragTrap();

		void	vaulthunter_dot_exe(std::string const & target);
		void	cryoAttack(std::string const & target);
		void	exploAttack(std::string const & target);
		void	electricAttack(std::string const & target);
		void	shotgunAttack(std::string const & target);
		void	corosiveAttack(std::string const & target);
		unsigned int	GetHitPoint();
		unsigned int	GetMaxHitPoint();
		unsigned int	GetArmorRed();
		unsigned int	GetRangedAttack();
};

#endif