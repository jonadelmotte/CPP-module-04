#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>

class AMateria;

class ICharacter
{
    protected :
        ICharacter();
        ICharacter(const ICharacter &src);

        ICharacter &operator=(const ICharacter &src);

    public:
        virtual ~ICharacter() {};
        // virtual ~ICharacter() = default;

        virtual const std::string &getName() const = 0;
        virtual void equipe(AMateria *m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};

#endif