/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:03:09 by lryst             #+#    #+#             */
/*   Updated: 2021/04/27 15:31:31 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::ifstream ifs(av[1]);
        std::string s1;
        std::string s2;
        std::string buff;
        
        s1 = av[2];
        s2 = av[3];
        if (s1 != "\0" && s2 != "\0")
        {
            if (ifs.good())
            {
                std::ofstream ofs("FILENAME.replace");
                while (getline(ifs,buff))
                {
                    std::size_t pos = buff.find(s1);
                    while (pos != std::string::npos)
                    {
                        buff.replace(pos, s2.length(),  s2);
                        pos = buff.find(s1);
                    }
                    ofs << buff << std::endl;
                }
            }
        }
        else
        {
            std::cout << "Error, s1 or s2 or both is/are empty." << std::endl;
        }
    }
    else
        std::cout << "Not the right number of arguments." << std::endl;
}