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

void Contact::Contact::display()
{
	std::cout << this->first_name <<std::endl;
	std::cout << this->last_name <<std::endl;
	std::cout << this->nickname <<std::endl;
	std::cout << this->login <<std::endl;
	std::cout << this->postal_adress <<std::endl;
	std::cout << this->phone_number <<std::endl;
	std::cout << this->birthday_date <<std::endl;
	std::cout << this->favorite_meal <<std::endl;
	std::cout << this->underwear_color <<std::endl;
	std::cout << this->darkest_secret <<std::endl;
}

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_last_name()
{
	return this->last_name;
}

std::string Contact::get_nickname()
{
	return this->nickname;
}

std::string Contact::get_login()
{
	return this->login;
}

std::string Contact::get_postal_adress()
{
	return this->postal_adress;
}

std::string Contact::get_email_adress()
{
	return this->email_adress;
}

std::string Contact::get_phone_number()
{
	return this->phone_number;
}

std::string Contact::get_birthday_date()
{
	return this->birthday_date;
}

std::string Contact::get_favorite_meal()
{
	return this->favorite_meal;
}
std::string Contact::get_underwear_color()
{
	return this->underwear_color;
}

std::string Contact::get_darkest_secret()
{
	return this->darkest_secret;
}

void Contact::set_first_name(std::string name)
{
	this->first_name = name;
}

void Contact::set_last_name(std::string name)
{
	this->last_name = name;
}

void Contact::set_nickname(std::string name)
{
	this->nickname = name;
}
void Contact::set_login(std::string name)
{
	this->login = name;
}
void Contact::set_postal_adress(std::string name)
{
	this->postal_adress = name;
}

void Contact::set_email_adress(std::string name)
{
	this->email_adress = name;
}

void Contact::set_phone_number(std::string name)
{
	this->phone_number = name;
}

void Contact::set_birthday_date(std::string name)
{
	this->birthday_date = name;
}

void Contact::set_favorite_meal(std::string name)
{
	this->favorite_meal = name;
}

void Contact::set_underwear_color(std::string name)
{
	this->underwear_color = name;
}

void Contact::set_darkest_secret(std::string name)
{
	this->darkest_secret = name;
}
