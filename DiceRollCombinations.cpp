#include <iostream>

int roll(int n, int target)
{
    if (target == 0 && n == 0)
    {
        return 1;
    }
    if (target < 0 || n <= 0)
    {
        return 0;
    }

    int combinations = 0;

    for (int i = 1; i <= 4; ++i)
    {
        combinations += roll(n - 1, target - i);
    }

    return combinations;
}

int main()
{
    int val1 = roll(2, 4);
    std::cout << "Result 1: " << val1 << std::endl;

    int val2 = roll(4, 14);
    std::cout << "Result 2: " << val2 << std::endl;

    int val3 = roll(6, 21);
    std::cout << "Result 3: " << val3 << std::endl;

    int val4 = roll(2, 9);
    std::cout << "Result 4: " << val4 << std::endl;

    int val5 = roll(4, 16);
    std::cout << "Result 5: " << val5 << std::endl;

    return 0;
}
