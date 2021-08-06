/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:14:28 by user42            #+#    #+#             */
/*   Updated: 2021/08/06 02:42:07 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void    replace(char **av)
{
    std::string s1;
    std::string s2;
    std::string buff;
    std::string filename;
    
    s1 = av[2];
    s2 = av[3];
    filename = av[1];
    filename += ".replace";
    std::ifstream ifs(av[1]);
    std::ofstream ofs(filename);
    if (s1 == "\0" || s2 == "\0")
    {
        std::cout << "Error, s1 or s2 or both is/are empty." << std::endl;
        return ;
    }
    getline(ifs, buff, (char)ifs.eof());

	size_t	start = buff.find(s1);
	while (start != std::string::npos)
	{
		buff.replace(start, s1.length(), s2);
		start = buff.find(s1);
	}

	ifs.close();
	ofs << buff;
	ofs.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
        replace(av);
    else
        std::cout << "Not the right number of arguments." << std::endl;
}