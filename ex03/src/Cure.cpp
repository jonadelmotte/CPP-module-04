#include "../include/Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructor called\n";
}

Cure::Cure(const Cure &other) : AMateria(other.type_)
{
    std::cout << "Cure copy contructor called\n";
}

Cure::~Cure()
{
    std::cout << "Cure destructor called\n";
}

Cure    &Cure::operator=(const Cure &other)
{
    std::cout << "Cure operator = called\n";
    if (this != &other)
    {
        seType(other.geType());
    }
    return (*this);
}

Cure *Cure::clone() const
{
    std::cout << "clone (from Cure) called\n";
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target)
{
    std::cout << "use (frome Cure) called\n";
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}