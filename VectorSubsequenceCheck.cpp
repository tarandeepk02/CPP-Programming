#include <iostream>
#include <vector>

bool longer_vector(std::vector<int> v1, std::vector<int> v2)
{
    int size1 = v1.size();
    int size2 = v2.size();
    std::vector<int> longer;
    std::vector<int> shorter;
    if (size1 >= size2)
    {
        longer = v1;
        shorter = v2;
    }
    else
    {
        longer = v2;
        shorter = v1;
    }
    for (int i = 0; i < shorter.size(); i++)
    {
        bool match = false;
        for (int j = 0; j < longer.size(); j++)
        {
            if (longer[i] == shorter[j])
            {
                match = true;
                break;
            }
        }

        if (!match)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<int> v1 = {1, 4, 7, 3, 4, 8};
    std::vector<int> v2 = {1, 7, 4};

    std::cout << "Result 1: " << (longer_vector(v1, v2) ? "true" : "false") << std::endl;

    std::vector<int> v3 = {1, 4, 7, 3, 4, 8};
    std::vector<int> v4 = {4, 11, 3};

    std::cout << "Result 2: " << (longer_vector(v3, v4) ? "true" : "false") << std::endl;

    std::vector<int> v5 = {1, 7, 4};
    std::vector<int> v6 = {1, 4, 7, 3, 4, 8};

    std::cout << "Result 3: " << (longer_vector(v5, v6) ? "true" : "false") << std::endl;

    return 0;
}
