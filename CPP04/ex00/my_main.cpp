/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:52:55 by lryst             #+#    #+#             */
/*   Updated: 2021/05/05 12:42:34 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main()
{
    //commented out to check that the Sorcerer cannot be instantiated without parameters.
    //Sorcerer a;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Fairy luciole("Luciole");
    
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(luciole);
    return (0);
}