#include <iostream>
#include "EasyMath.h"


int main()
{
    EasyMath Task1 {"Adding"};

    Task1.adding(5,100);
    std::cout << Task1.get_result() << std::endl;

    return 0;
}
