#include "../include/MateriaSource.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/Character.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << "lol\n";
    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equipe(tmp); 
    tmp = src->createMateria("cure");
    me->equipe(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}