#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>


/**********************************************************/
/*                                                        */
/*                 WRONGANIMAL CLASS                      */
/*                                                        */
/**********************************************************/

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &new_type);
    ~WrongAnimal();

    void    makeSound() const;

    WrongAnimal  &operator=(const WrongAnimal &src);

    std::string getType() const;
};

#endif