/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 05:30:37 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 06:18:01 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "-> * A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "-> * B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "-> * C" << std::endl;
	else
		std::cout << "The type couldn't be found." << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		Base & b = dynamic_cast<A &>(p);
		static_cast<void>(b);
		std::cout << "-> & A" << std::endl;
		return ;
	}
	catch (std::bad_cast& bc) {}
	try
	{
		Base & b = dynamic_cast<B &>(p);
		static_cast<void>(b);
		std::cout << "-> & B" << std::endl;
		return ;
	}
	catch (std::bad_cast& bc) {}
	try
	{
		Base & b = dynamic_cast<C &>(p);
		static_cast<void>(b);
		std::cout << "-> & C" << std::endl;
		return ;
	}
	catch (std::bad_cast& bc) {}
}

Base * generate(void)
{
	int random;
	Base	*nv;

	random = rand()% 3;
	if (random == 0)
	{
		nv = new A();
		std::cout << "A is instancied." << std::endl;
	}
	else if (random == 1)
	{
		nv = new B();
		std::cout << "B is instancied." << std::endl;
	}
	else
	{
		nv = new C();
		std::cout << "C is instancied." << std::endl;
	}
	return nv;
}

int main()
{
	srand (time(NULL));

	Base *nv;

	nv = generate();
	identify_from_pointer(nv);
	identify_from_reference(*nv);
}