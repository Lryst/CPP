/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:28:26 by lryst             #+#    #+#             */
/*   Updated: 2021/04/05 16:32:22 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;
    
    delete panthere;
}

int main()
{
    memoryLeak();
    system ("leaks a.out");
    return (0);
}