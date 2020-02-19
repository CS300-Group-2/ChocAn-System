#ifndef __PERSON_H
#define  __PERSON_H

#include <string>

#include "defs.h"
#include "entity.h"
#include "../data_structures.h"

//Protected inheritance keeps entity's
//data hidden even though it's public
//in that struct
class person : protected entity {
  protected:
     std::string name;
     id_num id;
     std::string street;
     std::string city;
     std::string state;
     std::string zipcode;
     service_list services;
 };

#endif
