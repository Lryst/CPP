/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:48:38 by lryst             #+#    #+#             */
/*   Updated: 2021/03/26 10:44:20 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
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
            std::cout << "OKey ! Let's add a contact !" << std::endl;
        if (cmd == "SEARCH")
            std::cout << "What contact are you looking for ?" << std::endl;
        if (cmd == "EXIT")
        {
            std::cout << "All contact are deleted" << "\n";
            std::cout << "GoodBye !" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "Sorry this command is invalid. Let's try ADD, SEARCH or EXIT." << std::endl;
        }
        
    }
    
    return (0);
}