#ifndef __ENTITY_HASH_TABLE_H
#define __ENTITY_HASH_TABLE_H

#include "service_list.h"

class e_hash_table {
    //Nested definition to keep nodes out of
    //scope for the rest of the system:w

    struct entity_node {
        entity_node* next;
        entity e;
    };


    //Stuff
};

#endif
