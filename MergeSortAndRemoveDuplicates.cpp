#include <vector>
#include <iostream>

std::vector<int> mergeSort(const std::vector<int> &vec1, const std::vector<int> &vec2)
{
    std::vector<int> merged;
    // Set int variable to keep last added value
    int lastAdded;

    int i = 0, j = 0;

    // Merge the two vectors
    while (i < vec1.size() && j < vec2.size())
    {
        if (vec1[i] < vec2[j])
        {
            if (vec1[i] != lastAdded)
            {
                merged.push_back(vec1[i]);
                lastAdded = vec1[i];
            }
            i++;
        }
        else if (vec1[i] > vec2[j])
        {
            if (vec2[j] != lastAdded)
            {
                merged.push_back(vec2[j]);
                lastAdded = vec2[j];
            }
            j++;
        }
        else
        {
            // If Both are equal then add only once
            if (vec1[i] != lastAdded)
            {
                merged.push_back(vec1[i]);
                lastAdded = vec1[i];
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from vec1
    while (i < vec1.size())
    {
        if (vec1[i] != lastAdded)
        {
            merged.push_back(vec1[i]);
            lastAdded = vec1[i];
        }
        i++;
    }

    // Add remaining elements from vec2
    while (j < vec2.size())
    {
        if (vec2[j] != lastAdded)
        {
            merged.push_back(vec2[j]);
            lastAdded = vec2[j];
        }
        j++;
    }

    return merged;
}

int main()
{
    std::vector<int> vec1 = {1, 2, 3, 5, 5};
    std::vector<int> vec2 = {2, 3, 4, 6, 15, 26, 50};

    std::vector<int> result = mergeSort(vec1, vec2);

    // Print result
    for (int num : result)
    {
        std::cout << num << " ";
    }
    return 0;
}
