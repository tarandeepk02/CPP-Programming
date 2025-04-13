#include <iostream>
#include "stackV.h"

struct state
{
    int n;
    int target;
};

int roll(int n, int target)
{
    stack<state> s;

    // Initial state with n rolls and sum 0
    s.push({n, 0});
    int count = 0;

    while (!s.empty())
    {
        // Get the current state
        state current = s.pop();

        // If no more rolls are left then check if reached the target sum
        if (current.n == 0)
        {
            if (current.target == target)
            {
                // Increment the count if the sum matches the target
                count++;
            }
        }
        else
        {
            for (int roll = 1; roll <= 4; roll++)
            {
                // To check if sums exceeding target
                if (current.target + roll <= target)
                {
                    s.push({current.n - 1, current.target + roll});
                }
            }
        }
    }

    return count;
}

int main()
{
    // Test cases
    std::cout << "roll(2, 4) = " << roll(2, 4) << std::endl;
    std::cout << "roll(4, 14) = " << roll(4, 14) << std::endl;
    std::cout << "roll(6, 21) = " << roll(6, 21) << std::endl;
    std::cout << "roll(2, 9) = " << roll(2, 9) << std::endl;
    std::cout << "roll(4, 16) = " << roll(4, 16) << std::endl;

    return 0;
}
