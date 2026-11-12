#include "../include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    _Brain = new Brain();
    std::cout << "Isn't this baby WrongCat so cute ?\n";
}

WrongCat::~WrongCat()
{
    delete(_Brain);
    std::cout << "NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO the WrongCat has died !!!\n";
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    if (this != &src)
    {
        this->type = src.getType();
        this->_Brain = src.getBrain();
    }
    return (*this);
}

Brain   *WrongCat::getBrain() const
{
    return _Brain;
}

void    WrongCat::makeSound() const
{
    std::cout << type << " : ' Meow ! 🐱 ! ', this seems Wrong doesn't it ?\n";
}
