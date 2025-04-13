#include <iostream>
#include <cctype>
#include <string>

int main()
{
    std::string str;
    int all_letter = 0;
    std::cout << "Enter your string: ";
    getline(std::cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str.at(i)))
        {
            if (!isupper(str.at(i)))
            {
                all_letter = 0;
                std::cout << "Lowercase letter at position: " << i << std::endl;
            }
            else
            {
                all_letter = 1;
            }
        }
        else
        {
            all_letter = 2;
        }
    }

    if (all_letter == 1)
    {
        std::cout << "All upper case";
    }
    if (all_letter == 2)
    {
        std::cout << "String is not having all alphabets";
    }

    return 0;
}