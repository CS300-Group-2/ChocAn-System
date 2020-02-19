//CS300 group 2
#ifndef __ENTITY_H
#define __ENTITY_H

#include <string>

#include "defs.h"

//Made as a struct to keep services
//as simple bags of items
struct entity {
		id_num id;

    virtual int hash();

};

#endif
