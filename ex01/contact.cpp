/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:32:14 by lryst             #+#    #+#             */
/*   Updated: 2021/03/23 15:33:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Construction d'un contact" << std::endl;
	nbr_contact = 0;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Deconstruction d'un contact" << std::endl;
	return ;
}

/* void    Contact::add(std::string cmd)
{
	if (this->nbr_contact == 8)
	{
		std::cout << "the PhoneBook is full Sorry" << std::endl;
		return ;
	}
	
} */