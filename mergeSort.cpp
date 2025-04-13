// 3. Sort an Array of Strings
// Modify the merge sort algorithm to sort an array of strings based on lexicographical order.
#include <iostream>

void merge(std::string arr[], int i, int i_end, int j, int j_end, std::string narr[])
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

void merge_sort(std::string arr[], int low, int high, std::string narr[])
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    merge_sort(arr, low, mid, narr);
    merge_sort(arr, mid + 1, high, narr);

    merge(arr, low, mid, mid + 1, high, narr);
}
int main()
{
    const int n = 4;
    std::string arr[n] = {"banana", "apple", "cherry", "date"};
    std::string narr[n];

    merge_sort(arr, 0, 4 - 1, narr);

    for (int k = 0; k < n; k++)
    {
        std::cout << arr[k] << " ";
    }

    return 0;
}