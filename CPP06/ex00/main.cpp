/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:28:28 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 04:20:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static int	check_types(char *av)
{
	bool f;
	int p;
	std::string tmp;
	unsigned int i;
	
	f = false;
	p = false;
	tmp = av;
	i = 0;
	if (strcmp(av, "-inf") ==  0 || strcmp(av, "+inf") ==  0 || strcmp(av, "nan") ==  0)
		return 5;
	if (strcmp(av, "-inff") ==  0 || strcmp(av, "+inff") ==  0 || strcmp(av, "nanf") ==  0)
		return 6;
	if (tmp.length() == 1 && !isdigit(av[0]))
		return 1;
	if (!isdigit(av[0]) && av[0] != '-' && av[0] != '+')
		return (-1);
	if (av[tmp.length() - 1] == 'f')
	{
		tmp = tmp.substr(0, tmp.length() -1);
		f = 1;
	}
	while (++i < tmp.length())
	{
		if (!isdigit(av[i]))
		{
			if (av[i] == '.' && p == true)
				return -1;
			p = true;
		}
	}
	if (tmp.length() == i)
	{
		if (p)
		{
			if (f)
				return 3;
			return 4;
		}
		return 2;
	}
	return -1;
}

int main(int ac, char **av)
{
	int type;

	type = -2;
	if (ac != 2)
	{
		std::cout << "Error : Bad number argument." << std::endl;
		return 0;
	}
	if (av[1])
	{
		Convert	conv(av[1]);
		conv.setType(check_types(av[1]));
		if (conv.getType() > 0)
			return (conv.casting());
	}
	std::cout << "Error : Bad argument. Please enter a char, or a int, or a double, or a float." << std::endl;
	return (0);	
}