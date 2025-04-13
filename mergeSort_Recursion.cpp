#include <iostream>

void merge(int arr[], int i, int i_end, int j, int j_end, int narr[])
{

    int k = i;
    int start = i;

    while (i <= i_end && j <= j_end)
    {
        if (arr[i] < arr[j])
        {
            narr[k++] = arr[i];
            i++;
        }
        else
        {
            narr[k++] = arr[j];
            j++;
        }
    }

    while (i <= i_end)
    {

        narr[k++] = arr[i];
        i++;
    }

    while (j <= j_end)
    {
        narr[k++] = arr[j];
        j++;
    }

    for (auto x = start; x <= j_end; x++)
    {
        arr[x] = narr[x];
    }
}

void merge_r(int arr[], int low, int high, int narr[])
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    merge_r(arr, low, mid, narr);
    merge_r(arr, mid + 1, high, narr);

    merge(arr, low, mid, mid + 1, high, narr);
}

int main()
{
    const int n = 6;
    int arr[n] = {5, 15, 10, 3, 2, 11};
    int narr[n];
    merge_r(arr, 0, n - 1, narr);

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}