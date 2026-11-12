#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/**********************************************************/
/*                                                        */
/*                 CAT CLASS                              */
/*                                                        */
/**********************************************************/

class Dog : public Animal
{
    private :
        Brain *_Brain;

    public :
        Dog();
        ~Dog();

        Dog &operator=(const Dog &src);

        Brain *getBrain() const;

        void    makeSound() const;
} ;

#endif