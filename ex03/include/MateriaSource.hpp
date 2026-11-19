#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria    *spellBook_[4];
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &src);

        ~MateriaSource();

        MateriaSource   &operator=(const MateriaSource &src);

        void        learnMateria(AMateria *Materia);
        AMateria    *createMateria(std::string const &type);
        int        isKnownMateria(std::string const &type);
} ;

#endif