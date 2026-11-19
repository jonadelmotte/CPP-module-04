#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
    private :

    public :
        Cure();
        Cure(const Cure &other);
        ~Cure();

        Cure    &operator=(const Cure &other);

        Cure *clone() const;
        void use(ICharacter &target);
} ;

#endif