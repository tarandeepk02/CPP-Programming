#include <iostream>
#include "ClassOperationsHeader.h"

int main()
{
    ClassOperationsHeader t;
    std::cout << "Default values: " << t << std::endl;

    ClassOperationsHeader a(3);
    std::cout << "Set x,y,z to the same value: " << a << std::endl;

    ClassOperationsHeader b(1, 2, 3);
    std::cout << "Set x,y,z to provided values: " << b << std::endl;

    ClassOperationsHeader e(1, 2, 3);
    std::cout << "E: " << b << std::endl;
    ClassOperationsHeader f(1, 2, 4);
    std::cout << "F: " << b << std::endl;

    int common = e == f;
    std::cout << "Common Values in E & F: " << common << std::endl;

    ClassOperationsHeader q(5, 1, 2);
    std::cout << "Add 5 to: " << q << std::endl;
    ClassOperationsHeader r = 5 + q;

    std::cout << r << std::endl;

    return 0;
}
