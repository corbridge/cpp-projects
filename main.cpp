#include <iostream>
#include "VersionConfig.h"
#include "MathFunctions/MathFunctions.h"

int main(){

    std::cout<<"Project version: "<<Project_VERSION_MAJOR<<"."<<Project_VERSION_MINOR<<std::endl;
    std::cout<<"10 + 15 = "<<sum(10,15)<<std::endl;
    return 1;
}
