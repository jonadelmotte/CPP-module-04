#include "../include/AMateria.hpp"
#include <iostream>

AMateria::AMateria() : type_("")
{

}

AMateria::AMateria(const AMateria &src) : type_(src.geType())
{

}

AMateria::AMateria(std::string const &type) : type_(type)
{

}

AMateria::~AMateria()
{

}

AMateria    &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        seType(other.geType());
    }
    return (*this);
}

std::string const   &AMateria::geType() const
{
    return (this->type_);
}

void    AMateria::seType(const std::string &src)
{
    type_ = src;
}

AMateria    *AMateria::clone() const
{
    AMateria *clone;

    clone->seType(this->type_);
    return (clone);
}

void    AMateria::use(ICharacter &target)
{
    std::cout << "[ WARNING ]\nThis is not normal behaviour\nThere is no spell\n";
}