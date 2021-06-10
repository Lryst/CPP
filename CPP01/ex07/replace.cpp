/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:14:28 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 13:35:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void    replace(char **av)
{
    std::ifstream ifs(av[1]);
    std::string s1;
    std::string s2;
    std::string buff;
    std::string filename;
    
    s1 = av[2];
    s2 = av[3];
    filename = av[1];
    filename += ".replace";
    if (s1 != "\0" && s2 != "\0")
    {
        if (ifs.good())
        {
            std::ofstream ofs(filename.c_str());
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
        std::cout << "Error, s1 or s2 or both is/are empty." << std::endl;
}

int main(int ac, char **av)
{
    if (ac == 4)
        replace(av);
    else
        std::cout << "Not the right number of arguments." << std::endl;
}