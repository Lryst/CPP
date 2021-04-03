/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:56 by lryst             #+#    #+#             */
/*   Updated: 2021/04/03 18:07:48 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add_contact()
{
	if (m_index == 8)
		std::cout << "Sorry the PhoneBook is full" << std::endl;
	else
	{
		std::cout << "First name :";
		std::cin >> tab[m_index].first_name;
		std::cout << "Last name :";
		std::cin >> tab[m_index].last_name;
		std::cout << "Nickname :";
		std::cin >> tab[m_index].nickname;
		std::cout << "Login :";
		std::cin >> tab[m_index].login;
		std::cout << "Postal adress :";
		std::cin >> tab[m_index].postal_adress;
		std::cout << "Phone number :";
		std::cin >> tab[m_index].phone_number;
		std::cout << "birthday_date :";
		std::cin >> tab[m_index].birthday_date;
		std::cout << "Favorite meal :";
		std::cin >> tab[m_index].favorite_meal;
		std::cout << "Underwear color :";
		std::cin >> tab[m_index].underwear_color;
		std::cout << "Darkest secret :";
		std::cin >> tab[m_index].darkest_secret;
		m_index++;
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

void	PhoneBook::check_line(std::string str)
{
	int len;
	int curser;

	curser = 0;	
	//std::cout << "--------------------------------------------\n|" << std::endl;
	len = str.length();
	if (len > 10)
	{
		std::string tmp = str.substr(0,10);
		tmp.back() = '.';
		std::cout << tmp << "|";
	}
	else
	{
		while (curser++ < 10 - len)
			std::cout << " ";
		std::cout << str << "|";
	}
	
}

void	PhoneBook::search_contact()
{
	int i;
	int index;
	
	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|     login|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < m_index)
	{
		std::cout << "|         " << i << "|";
		check_line(tab[i].first_name);
		check_line(tab[i].last_name);
		check_line(tab[i].login);
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		i++;
	}
	std::cout << "What contact are you looking for ?" << std::endl;
	std::cin >> index;
	print_contact(index);
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