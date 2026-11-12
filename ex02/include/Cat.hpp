#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


/**********************************************************/
/*                                                        */
/*                 CAT CLASS                              */
/*                                                        */
/**********************************************************/

class Cat : public Animal
{
    private:
        Brain   *_Brain;

    public:
        Cat();
        ~Cat();

        Cat &operator=(const Cat &src);

        Brain   *getBrain() const;

        void    makeSound() const;
} ;

#endif