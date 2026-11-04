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

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
        this->type = src.getType();
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << type << " : ' Meow ! 🐱 ! '\n";
}
