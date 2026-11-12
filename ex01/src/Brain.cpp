#include "../include/Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Today, A new Brain was born !!\n";
}

Brain::~Brain()
{
    std::cout << "Today, An old brain has died !!\n";
}

void    Brain::set_idea(const std::string &idea)
{
    int i = 0;

    while (i <= 99 && !this->ideas[i].empty())
        i++;
    if (i <= 99)
    {
        this->ideas[i] = idea;
        return ;
    }
    std::cout << "This brain is already way to full\n";
}

std::string Brain::get_idea(const int index) const
{
    return (this->ideas[index]);
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "lol hahah hih\n";
    if (this != &src)
    {
        int i = 0;
        while (!src.get_idea(i).empty())
        {
            if (!this->ideas[i].empty())
                this->rm_idea(i);
            this->set_idea(src.get_idea(i));
            i++;
        }
        for ( ;this->ideas[i].empty(); i++)
            this->ideas[i].clear();
    }
    return (*this);
}

void    Brain::say_idea(const int index) const
{
    if (this->ideas[index].empty())
        std::cout << "There is NOTHING at the " << index << " position in this Brain !!\n";
    else
        std::cout << this->ideas[index] << std::endl;
}

void    Brain::rm_idea(const int index)
{
    this->ideas[index].clear();
}
