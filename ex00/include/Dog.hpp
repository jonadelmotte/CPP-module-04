#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

/**********************************************************/
/*                                                        */
/*                 CAT CLASS                              */
/*                                                        */
/**********************************************************/

class Dog : public Animal
{
    public :
        Dog();
        ~Dog();

        void    makeSound() const;
} ;

#endif