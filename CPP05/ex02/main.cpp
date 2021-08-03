/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:18:34 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 14:48:31 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	srand (time(NULL));
	
	Bureaucrat a("Bob", 3);
	Bureaucrat a2("Jessica", 26);
	Bureaucrat b("Courgette", 148);
	Bureaucrat c("Hip-Hop", 40);

	ShrubberyCreationForm d("maison");
	PresidentialPardonForm e("barbecue");
	RobotomyRequestForm f("restaurant");

	std::cout << "\n--------------RobotomyRequestForm--------------" << std::endl;
	std::cout << f;
	f.beSigned(b);
	f.beSigned(a2);
	std::cout << f;
	f.beSigned(a);
	a2.executeForm(f);
	std::cout << f;

	std::cout << "\n-------------ShrubberyCreationForm-------------" << std::endl;
	std::cout << d;
	std::cout << a2;
	a2.executeForm(d);
	a.signForm(d);
	std::cout << d;
	a.executeForm(d);

	std::cout << "\n------------PresidentialPardonForm------------" << std::endl;
	
	std::cout << e;
	b.executeForm(e);
	std::cout << b;
	b.signForm(e);
	std::cout << e;
	c.signForm(e);
	c.executeForm(e);
	//a2.dec_grade_request();
	//a.executeForm(d);
	//a.executeForm(d);
	/* a2.dec_grade_request();
	std::cout << a2;
	e.beSigned(a2);
	std::cout << f;
	a2.executeForm(d); */
	/* a2.executeForm(d);
	e.beSigned(a2);
	std::cout << f << std::endl;
	std::cout << d;
	std::cout << e;
	std::cout << a << std::endl;
	a.dec_grade_request();
	std::cout << a << std::endl;
	a.dec_grade_request();
	a.dec_grade_request();
	std::cout << a << std::endl;
	 */
}