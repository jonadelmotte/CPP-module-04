#include "../include/Character.hpp"
#include <iostream>

Character::Character() : name_("DEFAULT_NAME"), slots_() {
}

Character::Character(const Character &src) : name_(src.getName()), slots_() {
    for (int i = 0; i < 4; i++)
    {
        if (src.slots_[i])
            slots_[i] = src.slots_[i];
    }
}

Character::Character(const std::string &name) : name_(name), slots_() {
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (slots_[i])
            delete slots_[i];
    }
}

Character &Character::operator=(const Character &src) {
    if (this != &src)
    {
        name_ = src.name_;
        for (int i = 0; i < 4; i++)
        {
            if (src.slots_[i])
                slots_[i] = src.slots_[i];
        }
    }
}

const std::string &Character::getName() const {
    return (name_);
}

void    Character::equipe(AMateria *m) {
    if (m)
    {
        int i = 0;
        while (i < 4 && slots_[i])
            i++;
        if (i < 4)
            slots_[i] = m;
        else
            ;
            // std::cout << "Inventory is full\n";
    }
}

void    Character::unequip(int idx) {
    if (idx < 4 && idx > -1)
    {
        if (slots_[idx])
            slots_[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter &target) {
    if (idx < 4 && idx > -1 && slots_[idx])
        slots_[idx]->use(target);
}
