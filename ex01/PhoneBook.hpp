/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:44 by lryst             #+#    #+#             */
/*   Updated: 2021/04/01 11:52:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"
# include <iostream>

class PhoneBook
{
private:
	int     index;
	Contact tab[8];
public:
	void    add_contact();
	void    print_contact(int index);
	void	search_contact();
	//PhoneBook();
	//~PhoneBook();
};

#endif