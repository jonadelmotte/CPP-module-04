#ifndef  WRONGCAT_HPP
# define  WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"


/**********************************************************/
/*                                                        */
/*                  WRONGCAT CLASS                        */
/*                                                        */
/**********************************************************/

class  WrongCat : public WrongAnimal
{
    private:
        Brain *_Brain;

    public:
        WrongCat();
        ~WrongCat();

         WrongCat &operator=(const  WrongCat &src);

        Brain   *getBrain() const;    

        void    makeSound() const;
} ;

#endif