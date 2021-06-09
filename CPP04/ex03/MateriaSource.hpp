/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:22:19 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 17:21:50 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria* _invent[4];
        
    public :
        MateriaSource();
        MateriaSource(MateriaSource const & cpy);
        MateriaSource & operator=(MateriaSource const & src);
        virtual ~MateriaSource();
        
        virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif