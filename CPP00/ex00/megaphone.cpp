/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:36:52 by lryst             #+#    #+#             */
/*   Updated: 2021/03/23 13:14:20 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
    {
        std::string str("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
        std::cout << str << '\n';
        return (0);
    }
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            putchar(toupper(argv[i][j]));
            j++;
        }
        i++;
    }
    std::cout << '\n';
    return (0);
}