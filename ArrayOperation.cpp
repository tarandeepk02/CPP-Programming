#include <iostream>
#include "array002.h"

void print(int range, quiz8 arr)
{
    for (int i = 0; i < range; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    // Create an array with 3 elements and all initialized to 0
    array8 a(3);
    std::cout << "Array with 3 elements, initialized to 0: ";
    print(3, a);

    // Create another array with 4 elements and all initialized to 5
    array8 b(4, 5);
    std::cout << "Array with 4 elements, initialized to 5: ";
    print(4, b);

    // Use copy constructor to create a new object c as a copy of b
    array8 c(b);
    std::cout << "Copy of b using copy constructor: ";
    print(4, c);

    // Another construtor
    array8 d(6, 4);
    std::cout << "Array with 6 elements, initialized to 4: ";
    print(6, d);

    // Use assignment operator to assign b to d new object d
    array8 e;
    e = d;
    std::cout << "Assignment of b to d using assignment operator: ";
    print(6, e);

    return 0;
}