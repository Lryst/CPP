/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:28:26 by lryst             #+#    #+#             */
/*   Updated: 2021/06/14 12:11:35 by lryst            ###   ########.fr       */
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
    return (0);
}