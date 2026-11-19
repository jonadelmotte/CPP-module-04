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

void   AMateria::use(ICharacter &target)
{
    (void)target;
}
