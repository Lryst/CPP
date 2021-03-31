/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:56 by lryst             #+#    #+#             */
/*   Updated: 2021/03/31 17:54:05 by lryst            ###   ########.fr       */
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
}

void	PhoneBook::print_contact(int index)
{
	std::cout << tab[index].first_name <<std::endl;
}