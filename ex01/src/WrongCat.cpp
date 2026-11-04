#include "../include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Isn't this baby WrongCat so cute ?\n";
}

WrongCat::~WrongCat()
{
    std::cout << "NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO the WrongCat has died !!!\n";
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
        this->type = src.getType();
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << type << " : ' Meow ! 🐱 ! ', this seems Wrong doesn't it ?\n";
}
