/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:24:01 by lryst             #+#    #+#             */
/*   Updated: 2021/07/03 19:19:37 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
    Character *you = new Character("you");
    ICharacter* me = new Character("me");
    AMateria* tmp;
    ICharacter* bob = new Character("bob");
    Character *she = new Character("she");
    
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
    
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
    
	me->use(0, *bob);
	me->use(1, *bob);

	tmp->use(*bob);
    
    AMateria* tmpCopy(tmp);
	tmpCopy->use(*bob);

	you->equip(src->createMateria("ice"));
	you->use(0, *me);

	*she = *you;

    tmp = src->createMateria("cure");
	she->equip(tmp);
    tmp = src->createMateria("ice");
	she->equip(tmp);
    she->use(2, *you);
        
	delete bob;
	delete me;
	delete src;
	delete she;
	delete you;

	return 0;
}
