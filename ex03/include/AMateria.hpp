#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class AMateria
{
    protected :
        std::string type_;

    public :
        AMateria();
        AMateria(const AMateria &src);
        AMateria(std::string const &type);
        ~AMateria();

        AMateria &operator=(const AMateria &other);

        std::string const &geType() const;
        void    seType(const std::string &src);

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
}   ;

#endif