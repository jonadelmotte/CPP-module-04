#include "../include/Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
    _Brain = new Brain();
    std::cout << "Quite the puppy we have here !\n";
}

Dog::~Dog()
{
    delete(_Brain);
    std::cout << "This dog had a long beautifull life..\n";
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->type = src.getType();
        this->_Brain = src.getBrain();
    }
    return (*this);
}

Brain   *Dog::getBrain() const
{
    return _Brain;
}

void    Dog::makeSound() const
{
    std::cout << type << " : ' woof ! 🐶 ! '\n";
}
