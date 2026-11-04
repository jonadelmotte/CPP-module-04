#ifndef  WRONGCAT_HPP
# define  WRONGCAT_HPP

#include "WrongAnimal.hpp"


/**********************************************************/
/*                                                        */
/*                  WRONGCAT CLASS                        */
/*                                                        */
/**********************************************************/

class  WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();

         WrongCat &operator=(const  WrongCat &src);

        void    makeSound() const;
} ;

#endif