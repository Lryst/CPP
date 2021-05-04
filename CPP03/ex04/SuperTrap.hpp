/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:00:23 by lryst             #+#    #+#             */
/*   Updated: 2021/05/04 14:12:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap
{
	public :
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & cpy);
		SuperTrap & operator=(SuperTrap const & src);
		~SuperTrap();

		using	FragTrap::rangedAttack;
		using	NinjaTrap::meleeAttack;
};

#endif