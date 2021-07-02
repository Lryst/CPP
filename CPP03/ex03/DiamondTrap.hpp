/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:49:07 by lryst             #+#    #+#             */
/*   Updated: 2021/07/02 11:34:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & cpy);
		DiamondTrap & operator=(DiamondTrap const & src);
		~DiamondTrap();

		void  print_values(void);
		using ScavTrap::attack;
};

#endif
