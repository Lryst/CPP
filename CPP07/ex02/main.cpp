#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    numbers.print_array();
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return(0);
    }
    try
    {
        numbers[MAX_VAL - 1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return(0);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    Array<char> character(6);
    char* mirror2 = new char[6];
    //srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        const char value = i + 65;
        character[i] = value;
        mirror2[i] = value;
    }
    //SCOPE
    {
        Array<char> tmp = character;
        Array<char> test(tmp);
    }

    for (int i = 0; i < 6; i++)
    {
        if (mirror2[i] != character[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    character.print_array();
    try
    {
        character[2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }
    try
    {
        character[2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (0);
    }

    for (int i = 0; i < 6; i++)
    {
        character[i] = rand();
    }
    delete [] mirror2;// */
    return 0;
}