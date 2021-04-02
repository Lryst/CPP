/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:56 by lryst             #+#    #+#             */
/*   Updated: 2021/04/01 11:53:13 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add_contact()
{
	if (index == 8)
		std::cout << "Sorry the PhoneBook is full" << std::endl;
	else
	{
		std::cout << "First name :";
		std::cin >> tab[index].first_name;
		std::cout << "Last name :";
		std::cin >> tab[index].last_name;
		std::cout << "Nickname :";
		std::cin >> tab[index].nickname;
		std::cout << "Login :";
		std::cin >> tab[index].login;
		std::cout << "Postal adress :";
		std::cin >> tab[index].postal_adress;
		std::cout << "Phone number :";
		std::cin >> tab[index].phone_number;
		std::cout << "birthday_date :";
		std::cin >> tab[index].birthday_date;
		std::cout << "Favorite meal :";
		std::cin >> tab[index].favorite_meal;
		std::cout << "Underwear color :";
		std::cin >> tab[index].underwear_color;
		std::cout << "Darkest secret :";
		std::cin >> tab[index].darkest_secret;
		index++;
	}
	return ;
}

void	PhoneBook::print_contact(int index)
{
	std::cout << tab[index].first_name <<std::endl;
	std::cout << tab[index].last_name <<std::endl;
	std::cout << tab[index].nickname <<std::endl;
	std::cout << tab[index].login <<std::endl;
	std::cout << tab[index].postal_adress <<std::endl;
	std::cout << tab[index].phone_number <<std::endl;
	std::cout << tab[index].birthday_date <<std::endl;
	std::cout << tab[index].favorite_meal <<std::endl;
	std::cout << tab[index].underwear_color <<std::endl;
	std::cout << tab[index].darkest_secret <<std::endl;
}

void	PhoneBook::search_contact()
{

}

/* PhoneBook::PhoneBook()
{
	std::cout << "construction du PhoneBook" << std::endl;
	index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "deconstrution du PhoneBook" << std::endl;
	return ;
} */