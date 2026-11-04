#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

/**********************************************************/
/*                                                        */
/*                 ANIMAL CLASS                           */
/*                                                        */
/**********************************************************/

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string &new_type);
    virtual ~Animal();

    virtual void    makeSound() const;

    virtual Animal  &operator=(const Animal &src);

    std::string getType() const;
};

#endif