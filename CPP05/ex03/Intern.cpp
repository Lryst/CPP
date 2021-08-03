/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:55:59 by lryst             #+#    #+#             */
/*   Updated: 2021/08/03 15:30:29 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & cpy)
{
    *this = cpy;    
}

Intern const& Intern::operator=(Intern const & src)
{
    (void)src;
    return *this;
}

Intern::~Intern() {}

Form * Intern::makeForm(std::string nv, std::string target)
{
	Form *form[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    
    for (int i = 0; i < 3; i++)
    {
        if (nv.compare(form[i]->getName()) == 0)
        {
            std::cout << "The Intern creates " << form[i]->getName() << std::endl;
            return (form[i]);
        }
        //delete form[i];
    }
    //delete [] form;
    std::cout << "Form not found. Please check the orthograph." << std::endl;
    return (0);
}
