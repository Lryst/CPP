/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:48:38 by lryst             #+#    #+#             */
/*   Updated: 2021/04/04 16:38:27 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook instance;
    
    std::string cmd;
    std::cout << "-------------------------" << "\n";
    std::cout << "Welcome to my PhoneBook !" << "\n";
    std::cout << "-------------------------" << "\n\n";
    while (1)
    {
        std::cout << "Please enter a command : ";
        std::cin >> cmd;
        
        if (cmd == "ADD")
        {
            std::cin.clear();
            std::cout << "Okey ! Let's add a contact !" << std::endl;
            instance.add_contact();
            std::cout << "Contact created" << std::endl;
        }
        else if (cmd == "SEARCH")
        {
            instance.search_contact();
        }
        else if (cmd == "EXIT")
        {
            std::cout << "All contact are deleted, GoodBye !" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "Sorry, " << cmd <<" is invalid. Let's try ADD, SEARCH or EXIT." << std::endl;
        }
        
    }
    
    return (0);
}