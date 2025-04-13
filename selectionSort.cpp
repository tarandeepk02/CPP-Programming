#include <iostream>

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};

    for (int i = 0; i < n; i++)
    {
        int key = arr[i];

        int j = i + 1;

        int minindex = j;

        while (j < n)
        {
            // int temp = arr[j];
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            }
            j++;
        }

        // Swapping
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}