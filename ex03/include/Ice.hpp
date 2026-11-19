#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
    private :

    public :
        Ice();
        Ice(const Ice &other);
        ~Ice();

        Ice    &operator=(const Ice &other);

        Ice *clone() const;
        void use(ICharacter &target);
} ;

#endif