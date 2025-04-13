#ifndef CLASSOPERATIONSHEADER_H
#define CLASSOPERATIONSHEADER_H
#include <iostream>

class ClassOperationsHeader
{
public:
    // Set all values to zero
    ClassOperationsHeader();
    // Set all values to a same integer
    ClassOperationsHeader(int);
    // Set x,y,z to the integers that are passed
    ClassOperationsHeader(int, int, int);
    // Return the number of values the two QUIZ6 objects have in common
    int operator==(const ClassOperationsHeader &);
    // Will print out x, y and z in the format "(x,y,z)"
    friend std::ostream &operator<<(std::ostream &, const ClassOperationsHeader &);
    // Prototype for summing up the values
    friend ClassOperationsHeader operator+(int, const ClassOperationsHeader &);

private:
    int x;
    int y;
    int z;
};

quiz6::ClassOperationsHeader()
{
    x = 0;
    y = 0;
    z = 0;
}

quiz6::ClassOperationsHeader(int a)
{

    x = a;
    y = a;
    z = a;
}

quiz6::ClassOperationsHeader(int a, int b, int c)
{

    x = a;
    y = b;
    z = c;
}

int ClassOperationsHeader::operator==(const ClassOperationsHeader &other)
{
    int count = 0;
    if (x == other.x)
        count++;
    if (y == other.y)
        count++;
    if (z == other.z)
        count++;
    return count;
}
std::ostream &operator<<(std::ostream &out, const ClassOperationsHeader &obj)
{
    out << "(" << obj.x << "," << obj.y << "," << obj.z << ")";
    return out;
}
quiz6 operator+(int val, const ClassOperationsHeader &q)
{
    return ClassOperationsHeader(val + q.x, val + q.y, val + q.z);
}

#endif