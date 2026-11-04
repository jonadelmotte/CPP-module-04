#include "../include/WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("unknown")
{
    std::cout << "An WrongAnimal was just born, nobody seems to know what WrongAnimal it is..\n";
}

WrongAnimal::WrongAnimal(const std::string &new_type) : type(new_type)
{
    std::cout << "We just found out that an new " << type << " was born\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "by by little " << type << " you were quite nice :)\n";
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &src)
{
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << type << " : ' Š¶ªŒ×Ðþ ! 👾 ! ', this seems Wrong doesn't it ?\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}
