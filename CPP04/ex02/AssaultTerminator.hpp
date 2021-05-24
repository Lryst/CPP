/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:48:31 by lryst             #+#    #+#             */
/*   Updated: 2021/05/24 14:07:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTERMINATOR_H
# define ASSAULTERMINATOR_H
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private :
	
	public :
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & cpy);
		AssaultTerminator & operator=(AssaultTerminator const & src);
		~AssaultTerminator();

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif 