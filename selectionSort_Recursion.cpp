#include <iostream>

void selection_r(int arr[], int n, int i)
{
    if (i >= n - 1)
    {
        return;
    }

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

    return selection_r(arr, n, i + 1);
}

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};

    selection_r(arr, n, 0);

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}