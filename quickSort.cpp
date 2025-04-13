#include <iostream>
#include <stack>

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
    // Create a stack to store low and high indices
    std::stack<int> stack;

    // Push initial low and high values
    stack.push(low);
    stack.push(high);

    // Loop while there are elements to sort
    while (!stack.empty())
    {
        high = stack.top();
        stack.pop();
        low = stack.top();
        stack.pop();

        int piv = partition(arr, low, high);

        // Push left side of pivot onto stack if it's not already sorted
        if (low < piv - 1)
        {
            stack.push(low);
            stack.push(piv - 1);
        }

        // Push right side of pivot onto stack if it's not already sorted
        if (piv + 1 < high)
        {
            stack.push(piv + 1);
            stack.push(high);
        }
    }
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
