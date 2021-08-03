/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:18:34 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 15:39:38 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	srand (time(NULL));
	
	Bureaucrat a("Bob", 3);
	Bureaucrat a2("Jessica", 26);
	Bureaucrat b("Courgette", 148);
	Bureaucrat c("Hip-Hop", 40);
	Bureaucrat queen("Luciole", 1);

	Intern	someRandomIntern;
	Form *rrf;
	Form *impots;
	Form *taxe;
	Form *heaven;

	std::cout << "\n--------------------Intern--------------------" << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	impots = someRandomIntern.makeForm("shrubbery creation", "tchou_tchou");
	taxe = someRandomIntern.makeForm("presidential pardon", "building");
	heaven = someRandomIntern.makeForm("robotomy requuest", "failed");
	
	std::cout << "\n--------------RobotomyRequestForm--------------" << std::endl;
	std::cout << *rrf;
	rrf->beSigned(b);
	rrf->beSigned(a2);
	std::cout << *rrf;
	rrf->beSigned(a);
	queen.executeForm(*rrf);
	std::cout << *rrf;

	std::cout << "\n-------------ShrubberyCreationForm-------------" << std::endl;
	std::cout << *impots;
	std::cout << queen;
	a2.executeForm(*impots);
	a.signForm(*impots);
	std::cout << *impots;
	queen.executeForm(*impots);

	std::cout << "\n------------PresidentialPardonForm------------" << std::endl;
	
	std::cout << *taxe;
	b.executeForm(*taxe);
	std::cout << b;
	b.signForm(*taxe);
	std::cout << *taxe;
	c.signForm(*taxe);
	queen.executeForm(*taxe);
	
}