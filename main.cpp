#include <iostream>
#include "VersionConfig.h"

int main(int, char**){
    std::cout<<Project_VERSION_MAJOR<<"."<<Project_VERSION_MINOR;
    return 1;
}
