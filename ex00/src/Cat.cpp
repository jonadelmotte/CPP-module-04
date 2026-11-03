#include "../include/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    std::cout << "Isn't this baby cat so cute ?\n";
}

Cat::~Cat()
{
    std::cout << "NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO the cat has died !!!\n";
}

void    Cat::makeSound() const
{
    std::cout << type << " : ' Meow ! 🐱 ! '\n";
}
