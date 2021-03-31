#include <iostream>
#include "test.hpp"

Test::Test(void)
{
    std::cout << "contructeur call" << std::endl;
    return ;
}

Test::~Test(void)
{
    std::cout << "deconstructeur call" << std::endl;
    return ;
}

void    Test::bar(void)
{
    std::cout << "member function bar called" << std::endl;
    return ;
}