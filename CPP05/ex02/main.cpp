/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:18:34 by lryst             #+#    #+#             */
/*   Updated: 2021/08/02 17:30:39 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	srand (time(NULL));
	
	Bureaucrat a("Bob", 3);
	Bureaucrat a2("Jessica", 16);
	Bureaucrat b("Courgette", 0);
	Bureaucrat c("Hip-Hop", 151);

	Form d("Admin", 151);
	Form e("complication", 0);
	Form f("Plutot_pas_mal", 15);

	std::cout <<std::endl;
	
	f.beSigned(a2);
	std::cout << f;
	f.beSigned(a);
	std::cout << f;
	a2.dec_garde_request();
	std::cout << f;
	f.beSigned(a2);
	std::cout << f << std::endl;
	std::cout << d;
	std::cout << e;
	std::cout << a << std::endl;
	a.dec_garde_request();
	std::cout << a << std::endl;
	a.dec_garde_request();
	a.dec_garde_request();
	std::cout << a << std::endl;
}