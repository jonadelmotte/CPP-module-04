#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

/**********************************************************/
/*                                                        */
/*                 BRAIN CLASS                            */
/*                                                        */
/**********************************************************/

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &Brian);
    ~Brain();

    void        set_idea(const std::string &idea);
    std::string get_idea(const int index) const;
    
    Brain &operator=(const Brain &src);

    void        say_idea(const int index) const;
    void        rm_idea(const int index);
} ;

#endif