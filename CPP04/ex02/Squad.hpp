/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:06 by lryst             #+#    #+#             */
/*   Updated: 2021/05/24 15:47:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

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
		
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int i) const;
		virtual void setUnity(ISpaceMarine **new_unit);
		virtual ISpaceMarine **getUnity() const;
		virtual int push(ISpaceMarine *new_unit);
		virtual void setCount(int count);
};

#endif