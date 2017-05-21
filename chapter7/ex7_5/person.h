#ifndef PERSON_H
#define PERSON_H

#include <string>

struct person { 
    std::string name;
    std::string address;

    /* both are const - this function should not change the values*/
    std::string who() const {return name;}
    std::string where() const {return address;}


};

#endif