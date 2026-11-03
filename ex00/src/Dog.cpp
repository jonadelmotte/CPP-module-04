#include "../include/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
    std::cout << "Quite the puppy we have here !\n";
}

Dog::~Dog()
{
    std::cout << "This dog had a long beautifull life..\n";
}

void    Dog::makeSound() const
{
    std::cout << type << " : ' woof ! 🐶 !'\n";
}
