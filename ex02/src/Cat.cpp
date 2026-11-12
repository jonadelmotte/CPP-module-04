#include "../include/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
    _Brain = new Brain();
    std::cout << "Isn't this baby cat so cute ?\n";
}

Cat::~Cat()
{
    delete(_Brain);
    std::cout << "NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO the cat has died !!!\n";
}

Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->type = src.getType();
        this->_Brain = src.getBrain();
    }
    return (*this);
}

Brain   *Cat::getBrain() const
{
    return (_Brain);
}

void    Cat::makeSound() const
{
    std::cout << type << " : ' Meow ! 🐱 ! '\n";
}
