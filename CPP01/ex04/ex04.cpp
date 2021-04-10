/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 15:21:27 by lryst             #+#    #+#             */
/*   Updated: 2021/04/10 16:15:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";
    std::string* str_ptr = &str;
    std::string& str_ref = str;
    std::cout << *str_ptr << std::endl;
    std::cout << str_ref << std::endl;
    return 0;
}