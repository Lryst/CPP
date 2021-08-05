/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:28:28 by lryst             #+#    #+#             */
/*   Updated: 2021/08/05 22:59:33 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <typeinfo>
#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Error argument." << std::endl;
	Convert	conv(av[1]);
	conv.cast_to_char();
	conv.cast_to_int();
	conv.cast_to_float();
	conv.cast_to_double();

	return (0);	
}