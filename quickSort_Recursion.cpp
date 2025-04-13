#include <iostream>

int partition(int arr[], int low, int high)
{

    int piv = arr[(low + high) / 2];
    arr[(low + high) / 2] = arr[low];

    while (low < high)
    {
        while (low < high && arr[high] >= piv)
        {
            high--;
        }
        arr[low] = arr[high];
        while (low < high && arr[low] <= piv)
        {
            low++;
        }
        arr[high] = arr[low];
    }
    arr[high] = piv;
    return high;
}

void quick_sort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int piv = partition(arr, low, high);

    quick_sort(arr, low, piv - 1);
    quick_sort(arr, piv + 1, high);
}

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};

    quick_sort(arr, 0, n - 1);
    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}