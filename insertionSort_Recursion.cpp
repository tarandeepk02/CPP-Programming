#include <iostream>

void insertion_r(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }

    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    return insertion_r(arr, n, i + 1);
}

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};

    insertion_r(arr, n, 1);

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}