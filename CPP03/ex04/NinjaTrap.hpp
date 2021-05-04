/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:10:13 by lryst             #+#    #+#             */
/*   Updated: 2021/05/04 14:10:49 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public :
		NinjaTrap();
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const & cpy);
		NinjaTrap & operator=(NinjaTrap const & src);
		virtual ~NinjaTrap();

		void	ninjaShoebox(FragTrap & target);
		void	ninjaShoebox(ScavTrap & target);
		void	ninjaShoebox(NinjaTrap & target);
		unsigned int	GetEnergy();
		unsigned int	GetMaxEnergy();
		unsigned int	GetMeleeAttack();
};

#endif