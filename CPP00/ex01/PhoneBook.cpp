/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:56 by lryst             #+#    #+#             */
/*   Updated: 2021/04/06 14:30:21 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add_contact()
{
	std::string cmd;
	std::string	ret;

	if (m_index == 8)
	{
		std::cout << "Sorry the PhoneBook is full" << std::endl;
		return;
	}
	else
	{
		std::cout << "Okey ! Let's add a contact !" << std::endl;
		std::cout << "First name :";
		std::getline(std::cin, cmd);
		tab[m_index].set_first_name(cmd);

		std::cout << "Last name :";
		std::getline(std::cin, cmd);
		tab[m_index].set_last_name(cmd);

		std::cout << "Nickname :";
		std::getline(std::cin, cmd);
		tab[m_index].set_nickname(cmd);

		std::cout << "Login :";
		std::getline(std::cin, cmd);
		tab[m_index].set_login(cmd);

		std::cout << "Postal adress :";
		std::getline(std::cin, cmd);
		tab[m_index].set_postal_adress(cmd);

		std::cout << "Phone number :";
		std::getline(std::cin, cmd);
		tab[m_index].set_phone_number(cmd);

		std::cout << "birthday_date :";
		std::getline(std::cin, cmd);
		tab[m_index].set_birthday_date(cmd);

		std::cout << "Favorite meal :";
		std::getline(std::cin, cmd);
		tab[m_index].set_favorite_meal(cmd);

		std::cout << "Underwear color :";
		std::getline(std::cin, cmd);
		tab[m_index].set_underwear_color(cmd);

		std::cout << "Darkest secret :";
		std::getline(std::cin, cmd);
		tab[m_index].set_darkest_secret(cmd);
        std::cout << "Contact created" << std::endl;
		m_index++;
	}
	return ;
}

void	PhoneBook::print_contact(int index)
{
	tab[index].display();
}

void	PhoneBook::check_line(std::string str)
{
	int len;
	int curser;

	curser = 0;
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
	if (m_index == 0)
		std::cout << "Sorry the PhoneBook is empty" << std::endl;
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     index|first name| last name|     login|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		while (i < m_index)
		{
			std::cout << "|         " << i << "|";
			check_line(tab[i].get_first_name());
			check_line(tab[i].get_last_name());
			check_line(tab[i].get_login());
			std::cout << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			i++;
		}
		std::cout << "What contact are you looking for ?" << std::endl;
		std::cin >> index;
		print_contact(index);
	}
}
