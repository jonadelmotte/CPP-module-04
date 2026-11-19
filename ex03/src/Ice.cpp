#include "../include/Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called\n";
}

Ice::Ice(const Ice &other) : AMateria(other.type_)
{
    std::cout << "Ice copy constructor called\n";
}

Ice::~Ice()
{
    std::cout << "Ice destructor called\n";
}

Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice operator = called\n";
    if (this != &other)
    {
        seType(other.geType());
    }
    return (*this);
}

Ice *Ice::clone() const
{
    std::cout << "clone (frome Ice) called\n";
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
    std::cout << "use (from Ice) called\n";
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
