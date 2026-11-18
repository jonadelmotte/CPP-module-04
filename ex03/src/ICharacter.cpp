#include "../include/ICharacter.hpp"

ICharacter::ICharacter()
{

}

ICharacter::ICharacter(const ICharacter &src)
{
    *this = src;
}

ICharacter  &ICharacter::operator=(const ICharacter &src)
{
    (void)src;
    return (*this);
}
