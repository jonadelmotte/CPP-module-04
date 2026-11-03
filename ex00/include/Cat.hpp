#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"


/**********************************************************/
/*                                                        */
/*                 CAT CLASS                              */
/*                                                        */
/**********************************************************/

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();

        void    makeSound() const;
} ;

#endif