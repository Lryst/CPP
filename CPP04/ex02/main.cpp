/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:28:59 by lryst             #+#    #+#             */
/*   Updated: 2021/07/27 18:34:35 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* tab[4];
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	const Animal* l = new Dog();
	const WrongAnimal* m = new WrongAnimal();
	const Cat* n = new Cat();
	const Cat* o = new Cat(*n);
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	k->makeSound();
	m->makeSound();
	
	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	tab[3] = l;
	
	delete n;
	delete o;
	
	for (int i = 0; i < 4; i++)
		delete tab[i];
	//system("leaks ex01");
}
