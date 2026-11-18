#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
    private :
        std::string name_;
        AMateria *slots_[4];

    public :
        Character();
        Character(const Character &src);
        Character(const std::string &name);

        ~Character();

        Character &operator=(const Character &src);

        const std::string &getName() const;
        void equipe(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
} ;

#endif