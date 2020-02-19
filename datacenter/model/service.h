//CS300 Group 2
#ifndef __SERVICE_H
#define __SERVICE_H

#include <string>
#include <ctime>

#include "defs.h"
#include "entity.h"


struct service : public entity {
    std::time_t serviceTime; //unix epoch
    std::time_t timeOfCreation;
    id_num memberID;
    id_num providerID;
    id_num serviceCode;
    std::string comments;

    int hash();
};

#endif
