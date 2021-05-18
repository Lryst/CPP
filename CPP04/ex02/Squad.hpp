/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:06 by lryst             #+#    #+#             */
/*   Updated: 2021/05/18 13:23:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"
# include "TacticalMarine.hpp"

class Squad : public ISquad
{
	private :
		int _count;
		ISpaceMarine **_unity;
		
	public :
		Squad();
		Squad(Squad const & cpy);
		Squad & operator=(Squad const & src);
		~Squad();
		
		virtual void set_count(int nbr);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int i) const;
		virtual int push(ISpaceMarine *new_unit);
};

#endif