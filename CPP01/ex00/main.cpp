/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:38:03 by lryst             #+#    #+#             */
/*   Updated: 2021/06/09 18:42:12 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack()
{
	std::string tmp;
	
	Pony	pony1 = Pony("Little Pony");
	std::cout << "Creation of " << pony1.get_name() << " on the stack !" << std::endl;
	
	std::cout << "Choose a color for Little Pony :" << std::endl;
	std::cin >> tmp;
	pony1.set_color(tmp);
	std::cout << "Ok, so Little Pony's color is " << pony1.get_color() << std::endl;
	std::cout << "How old is Little Pony ?" << std::endl;
	std::cin >> tmp;
	pony1.set_age(tmp);
	std::cout << "Now Little Pony has " << pony1.get_age() << " years old" << std::endl;
	
}

void    ponyOnTheHeap()
{
	std::string tmp;
	
    Pony*	pony2 = new Pony("Big Pony");
	std::cout << "\nCreation of " << pony2->get_name() << " on the heap !" << std::endl;
	std::cout << "Choose a color for Big Pony :" << std::endl;
	std::cin >> tmp;
	pony2->set_color(tmp);
	std::cout << "Ok, so Big Pony's color is " << pony2->get_color() << std::endl;
	std::cout << "How old is Big Pony ?" << std::endl;
	std::cin >> tmp;
	pony2->set_age(tmp);
	std::cout << "Now Big Pony has " << pony2->get_age() << " years old" << std::endl;

	delete pony2;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);	
}