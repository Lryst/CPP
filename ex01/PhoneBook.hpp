/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:28:44 by lryst             #+#    #+#             */
/*   Updated: 2021/03/31 17:50:01 by lryst            ###   ########.fr       */
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
    Contact tab[7];
public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void    add_contact();
    void    print_contact(int index);
};

PhoneBook::PhoneBook(/* args */)
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

#endif