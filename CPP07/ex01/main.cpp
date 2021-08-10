/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:42:38 by lryst             #+#    #+#             */
/*   Updated: 2021/08/10 12:58:34 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	char tab[6] = "Lucie";
	int i[6] = {0, 1, 2, 3, 4, 5};
	float f[2] = {42.0f, 4.0f};
	double d[2] = {42.2, 4.4};

	std::cout << "-----------Tab iter-----------" << std::endl;
	iter(tab, 6, display);
	std::cout << "-----------Int iter-----------" << std::endl;
	iter(i, 6, display);
	std::cout << "----------Float iter----------" << std::endl;
	iter(f, 2, display);
	std::cout << "----------Double iter---------" << std::endl;
	iter(d, 2, display);
}
