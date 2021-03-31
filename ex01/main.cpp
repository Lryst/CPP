/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:48:38 by lryst             #+#    #+#             */
/*   Updated: 2021/03/31 17:49:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook instance;
    
    std::string cmd;
    std::cout << "-------------------------" << "\n";
    std::cout << "Welcome to my PhoneBook !" << "\n";
    std::cout << "-------------------------" << "\n\n";
    std::cout << "Please enter a command : ";
    std::cin >> cmd;
    
    std::cout << "Command : " << cmd << std::endl;
    while (1)
    {
        if (cmd == "ADD")
        {
            std::cin.clear();
            std::cout << "Okey ! Let's add a contact !" << std::endl;
            instance.add_contact();
            instance.print_contact(0);
        }
       /*  else if (cmd == "SEARCH")
            std::cout << "What contact are you looking for ?" << std::endl;
        else if (cmd == "EXIT")
        {
            std::cout << "All contact are deleted" << "\n";
            std::cout << "GoodBye !" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "Sorry this command is invalid. Let's try ADD, SEARCH or EXIT." << std::endl;
        } */
        
    }
    
    return (0);
}