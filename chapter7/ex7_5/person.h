#ifndef PERSON_H
#define PERSON_H

#include <string>

struct person { 
    std::string name;
    std::string address;

    /* name is const - address is not. 
    This is becase one can move, but a name cannot change (wihtout consierable paperwork)*/
    std::string who() const {return name;}
    std::string where() {return address;}
};

#endif