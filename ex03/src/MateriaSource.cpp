#include "../include/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource(), spellBook_() {
    std::cout << "MateriaSource constructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource(), spellBook_() {
    for (int i = 0; i < 4; i++)
    {
        if (src.spellBook_[i])
            spellBook_[i] = src.spellBook_[i];
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        if (spellBook_[i])
            delete spellBook_[i];
    }
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &src) {
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (src.spellBook_[i])
                spellBook_[i] = src.spellBook_[i];
        }
    }
    return *this;
}

int    MateriaSource::isKnownMateria(std::string const &type) {
    for (int i = 0; i < 4; i++)
    {
        if (spellBook_[i]->geType() == type)
            return i;
    }
    return false;
}

void    MateriaSource::learnMateria(AMateria *Materia) {
        std::cout << "learnMateria (frome MateriaSource) called\n";
        int i = 0;
        while (i < 4 && spellBook_[i]->geType().empty())
            i++;
        if (Materia && i < 4 && !isKnownMateria(Materia->geType()))
            spellBook_[i] = Materia;
        // else
            // std::cout << "Inventory is full\n";
}

AMateria    *MateriaSource::createMateria(std::string const &type) {
    if (!type.empty() && isKnownMateria(type))
       return spellBook_[isKnownMateria(type)]->clone();
    return 0;
}

