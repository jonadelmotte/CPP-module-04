#include "../include/Animal.hpp"
#include <iostream>

Animal::Animal() : type("unknown")
{
    std::cout << "An animal was just born, nobody seems to know what animal it is..\n";
}

Animal::Animal(const std::string &new_type) : type(new_type)
{
    std::cout << "We just found out that an new " << type << " was born\n";
}

Animal::~Animal()
{
    std::cout << "by by little " << type << " you were quite nice :)\n";
}

Animal  &Animal::operator=(const Animal &src)
{
    if (this != &src)
        this->type = src.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << type << " : ' Š¶ªŒ×Ðþ ! 👾 ! '\n";
}

std::string Animal::getType() const
{
    return type;
}
