#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>

#define TEST(type) std::cout << "\n/* * * * * * * * * * * * * * " type " TEST * * * * * * * * * * * * * * * */\n\n\n";

void    Animal_test()
{
    TEST("ANIMAL");

    Animal test;

    std::cout << "\n\n";

    test.makeSound();

    std::cout << "\n\n";

    return ;
}

void    Cat_test()
{
    TEST("CAT");

    Cat test;

    std::cout << "\n\n";

    test.makeSound();

    std::cout << "\n\n";

    return ;
}

void    Dog_test()
{
    TEST("ANIMAL");

    Dog test;

    std::cout << "\n\n";

    test.makeSound();

    std::cout << "\n\n";

    return ;
}


int main()
{
    Animal_test();
    Cat_test();
    Dog_test();
}