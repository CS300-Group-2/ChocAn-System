#ifndef __SERVICE_LIST_H
#define __SERVICE_LIST_H

#include "../model/service.h"


//Linked list, sorted by service date
class service_list  {
    //Nested definition to keep nodes out of scope
    //for the rest of the system
    struct service_node {
      service_node* next;
      service service;
    };

    //stuff
};

#endif
