#include "../include/Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{

}

Ice *Ice::clone() const
{
    Ice *clone;

    clone->seType(this->type_);
    return (clone);
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << "<name>" << " *\n";
}
