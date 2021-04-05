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

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_adress;
		std::string email_adress;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		void display();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_login();
		std::string get_postal_adress();
		std::string get_email_adress();
		std::string get_phone_number();
		std::string get_birthday_date();
		std::string get_favorite_meal();
		std::string get_underwear_color();
		std::string get_darkest_secret();
		void set_first_name(std::string name);
		void set_last_name(std::string name);
		void set_nickname(std::string name);
		void set_login(std::string name);
		void set_postal_adress(std::string name);
		void set_email_adress(std::string name);
		void set_phone_number(std::string name);
		void set_birthday_date(std::string name);
		void set_favorite_meal(std::string name);
		void set_underwear_color(std::string name);
		void set_darkest_secret(std::string name);
};

#endif
