/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 04:33:30 by lryst             #+#    #+#             */
/*   Updated: 2021/08/06 05:26:59 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef struct Data
{
    uintptr_t   nbr;
}               Data;

uintptr_t serialize(Data* ptr)
{
    uintptr_t ret;

    return (ret = reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    Data    *ret;

    return (ret = reinterpret_cast<Data*>(raw));
}

int main()
{
    Data dt1;
    Data *dt2 = NULL;

    dt1.nbr = serialize(&dt1);
    dt2 = deserialize(dt1.nbr);
    std::cout << "Print values of dt1->nbr -> [" << dt1.nbr << "]" <<std::endl;
    std::cout << "Print values of dt2->nbr -> [" << dt2->nbr << "]" <<std::endl;
}
