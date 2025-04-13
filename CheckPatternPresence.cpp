#include <iostream>
#include <string>

// Helper function
bool q10Helper(const std::string &str, const std::string &pattern, int strIndex, int patternIndex)
{
    // Base case: If matched all characters in the pattern then return true
    if (patternIndex == pattern.size())
    {
        return true;
    }

    // Base case: If reached the end of str but not matched all pattern then return false
    if (strIndex == str.size())
    {
        return false;
    }

    // Recursive step: If the current characters match then move both indices forward
    if (str[strIndex] == pattern[patternIndex])
    {
        return q10Helper(str, pattern, strIndex + 1, patternIndex + 1);
    }

    // leetcode: practice problems and solutions.

    // Otherwise move the strIndex forward and keep patternIndex unchanged
    return q10Helper(str, pattern, strIndex + 1, patternIndex);
}

bool q10(const std::string &str, const std::string &pattern)
{
    // Recursion with indice at 0
    return q10Helper(str, pattern, 0, 0);
}

// Print String true or false according to boolean value
std::string printString(bool val)
{
    if (val == 1)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{
    // Test Cases
    std::cout << "Result 1: " << printString(q10("hello there", "lore")) << std::endl;
    std::cout << "Result 2: " << printString(q10("This is a string YAY!", "his ring")) << std::endl;
    std::cout << "Result 3: " << printString(q10("brown dog", "won")) << std::endl;
    std::cout << "Result 4: " << printString(q10("test", "")) << std::endl;
    std::cout << "Result 5: " << printString(q10("", "test")) << std::endl;
    std::cout << "Result 6: " << printString(q10("", "")) << std::endl;

    return 0;
}
