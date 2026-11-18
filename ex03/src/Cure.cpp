#include "../include/Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{

}

Cure *Cure::clone() const
{
    Cure *clone;

    clone->seType(this->type_);
    return (clone);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << "<name>" << "’s wounds *\n";
}