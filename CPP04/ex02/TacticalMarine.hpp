/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 11:14:26 by lryst             #+#    #+#             */
/*   Updated: 2021/05/24 13:53:49 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
# define TACTICALMARINE_H
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private :
	
	public :
		TacticalMarine();
		TacticalMarine(TacticalMarine const & cpy);
		TacticalMarine & operator=(TacticalMarine const & src);
		~TacticalMarine();

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif