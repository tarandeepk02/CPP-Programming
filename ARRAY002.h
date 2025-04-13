#ifndef ARRAY002_H
#define ARRAY002_H
#include <iostream>

class array8
{
public:
    // Set an empty array and size of zero
    array8();

    // Make an array of size n with each position being the value x
    array8(int n, int x = 0);

    // Coded for you
    int &operator[](int);

    // add all functions needed to manage memory. Remember don't code in the class only prototypes
    //  Copy Constructor
    array8(const array8 &);

    // Assignment Operator
    const quiz8 &operator=(const array8 &);

    // Destructor
    ~array8();

private:
    int *size; // The size of the array
    int *arr;  // The array for the object
};

int &array8::operator[](int i)
{
    return arr[i];
}

// Default constructor which creates an empty array
quiz8::array8()
{
    size = new int(0); // Initialize size to 0
    arr = nullptr;     // No array allocated and set to null pointer
}

// Constructor create an array with n slots and all initialized to x
quiz8::array8(int n, int x)
{
    size = new int(n); // Store the size of the array
    arr = new int[n];  // Allocate memory for the array
    for (int i = 0; i < *size; i++)
    {
        // Initialize each slot with the value x
        arr[i] = x;
    }
}

// Copy Constructor which is deep copy of another quiz8 object
quiz8::array8(const quiz8 &rhs)
{
    size = new int(*rhs.size);      // Copy the size
    arr = new int[*size];           // Allocate a new array
    for (int i = 0; i < *size; i++) // Deep copy of array elements
    {
        arr[i] = rhs.arr[i];
    }
}

// Assignment operator which is deep copy from another quiz8 object
const array8 &array8::operator=(const array8 &rhs)
{
    if (this != &rhs) // Self assignment check
    {
        // Delete old array
        delete[] arr;
        delete size;

        // Deep copy the size and array
        size = new int(*rhs.size);
        arr = new int[*size];
        for (int i = 0; i < *size; i++)
        {
            arr[i] = rhs.arr[i];
        }
    }
    return *this;
}

// Destructor which release memory
array8::~array8()
{
    delete[] arr; // Delete the array
    delete size;  // Delete the size
}

#endif