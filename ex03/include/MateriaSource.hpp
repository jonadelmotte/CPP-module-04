#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        //ici mettre un container hihi gaga gogo
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &src);

        ~MateriaSource();

        MateriaSource   &operator=(const MateriaSource &src);

        void    learnMateria(AMateria*);
        AMateria    *createMateria(std::string const &type);
}

#endif