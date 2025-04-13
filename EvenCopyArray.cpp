#include <iostream>

int *even_copy(int *A, int &n)
{
    // Count the even numbers in the original array
    int evenCount = 0;
    for (int i = 0; i < n; ++i)
    {
        if (A[i] % 2 == 0)
        {
            evenCount++;
        }
    }

    // Create a new array with the original size plus the count of even numbers
    int newSize = n + evenCount;
    int *A3 = new int[newSize];

    // Copy original elements to the new array
    for (int i = 0; i < n; ++i)
    {
        A3[i] = A[i];
    }

    // Append even elements to the new array
    int index = n;
    for (int i = 0; i < n; ++i)
    {
        if (A[i] % 2 == 0)
        {
            A3[index++] = A[i];
        }
    }

    // Update the reference to the size of the array
    n = newSize;
    return A3;
}

int main()
{
    int A[] = {10, 4, 3, 6, 17};
    int n = 5;

    int *A2 = even_copy(A, n);

    for (int i = 0; i < n; i++)
    {
        std::cout << A2[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] A2;

    return 0;
}
