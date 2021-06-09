/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:01:37 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 17:24:03 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria
{
	protected :
		std::string _type;
		unsigned int _xp;

	public :
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & cpy);
		AMateria & operator=(AMateria const & src);
		virtual ~AMateria();
		
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif		