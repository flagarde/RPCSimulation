#include "RPCSim/SetupDatabaseDir.hpp"
#include "RPCSim/DefaultFolders.hpp"

#include <stdlib.h>
#include <iostream>

void RPCSim::setupDatabase()
{
   int result = setenv("HEED_DATABASE",RPCSim::HeedDatabase.c_str(),true);
   std::cout<<RPCSim::HeedDatabase.c_str()<<std::endl;
}