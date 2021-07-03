/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42f.r>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:24:01 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 18:24:31 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* moi = new Character("moi");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    moi->use(0, *bob);
    moi->use(1, *bob);
    
    delete bob;
    delete moi;
    delete src;

    return 0;
}
