#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include <iostream>

#define TEST(type) std::cout << "\n/* * * * * * * * * * * * * * " type " TEST * * * * * * * * * * * * * * * */\n\n\n";

// void    Animal_test()
// {
//     TEST("ANIMAL");

//     Animal test;

//     std::cout << "\n\n";

//     test.makeSound();

//     std::cout << "\n\n";

//     return ;
// }

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
    // Animal_test();
    Cat_test();
    Dog_test();
    return 0;
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     delete(meta);
//     delete(i);
//     delete(j);

//     return 0;
// }

// int main()
// {
//     const WrongAnimal* meta = new WrongAnimal();
//     const Animal* j = new Dog();
//     const WrongAnimal* i = new WrongCat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     delete(meta);
//     delete(i);
//     delete(j);

//     return 0;
// }
