/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:34:17 by lryst             #+#    #+#             */
/*   Updated: 2021/04/30 13:28:29 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & cpy);
		ScavTrap & operator=(ScavTrap const & src);
		virtual ~ScavTrap();

		void	challengeNewcomer(void);
};

#endif