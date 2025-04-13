#include <iostream>

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}