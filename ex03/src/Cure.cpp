#include "../include/Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{

}

Cure *Cure::clone() const
{
    Cure *clone;

    return (clone);
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}