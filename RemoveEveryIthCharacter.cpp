#include <iostream>
#include <string>

// Shift letter to the left side
void shift_letter_to_left(std::string &str, int index)
{
    // Base case
    if (index >= str.size() - 1)
    {
        // Remove character
        str.pop_back();
        return;
    }
    str[index] = str[index + 1];
    // Recursive call
    shift_letter_to_left(str, index + 1);
}

// Letter helper to get and set the index value of string
void letter_helper(std::string &str, int ith, int index, int count)
{
    // Base case
    if (index >= str.size())
    {
        return;
    }

    count++;

    if (count == ith)
    {
        shift_letter_to_left(str, index);
        count = 0;
    }
    // Recursive call
    letter_helper(str, ith, (count == 0) ? index : index + 1, count);
}

// Protype function
void remove_every_ith(std::string &str, int ith)
{
    if (ith > 0)
    {
        letter_helper(str, ith, 0, 0);
    }
}

int main()
{
    std::string str = "WE! A%RER H&AVGINQG OSOk MyUC*H IFUBN!!";
    remove_every_ith(str, 3);
    std::cout << str << std::endl;
    return 0;
}
