/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:28:59 by lryst             #+#    #+#             */
/*   Updated: 2021/07/26 13:11:01 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Cat* m = new Cat();
    const Cat* l = new Cat(*m);
    const WrongAnimal* k = new WrongAnimal();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound(); //will output the cat sound!j->makeSound();
    meta->makeSound();
    k->makeSound();
    delete meta;
    delete j;
    delete i;
    delete k;
    delete l;
    //system ("leaks ex00");
}
