/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:28:28 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 01:01:33 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	get_type(char *av)
{
	bool f;
	bool p;
	
	f = false;
	p = false;
	if (av == "-inf" || av == "+inf" || av == "nan")
		return 5;
	if (av == "-inff" || av == "+inff" || av == "nanf")
		return 6;
	if (av.length() == 1 && !av[0].isdigit())
		return 1;
	if (!av[0].isdigit() && av[0] != '-' && av[0] != "+")
		return (-1);
	if (av[av.length()] == 'f')
	{
		av = av.substr(0, av.length() -1);
		f = 1;
	}
	for (int i = 1; i < av.length(); i++)
	{
		if (!av[i].isdigit())
		{
			if (av[i] == '.' && p)
				p++;
			return -1;
		}
	}
	if (av.length() == i)
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
		std::cout << "Error : Bad number argument." << std::endl;
	if (av[1])
	{
		Convert	conv(av[1]);
		conv.setType(get_type(av[1]));
		if (conv.getType() > 0)
			return (conv.casting());
	}
	std::cout << "Error : Bad argument. Please enter a char, or a int, or a double, or a float." << std::endl;
	return (0);	
}