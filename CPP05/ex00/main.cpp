/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:18:34 by lryst             #+#    #+#             */
/*   Updated: 2021/07/30 16:39:53 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Bob", 3);
	Bureaucrat b("Courgette", 0);
	Bureaucrat c("Hip-Hop", 151);

	std::cout << a << std::endl;
	a.dec_grade();
	std::cout << a << std::endl;
	a.dec_grade();
	a.dec_grade();
	std::cout << a << std::endl;
}