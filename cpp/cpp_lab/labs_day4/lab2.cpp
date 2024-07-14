#include <iostream>

int main()
{

    std::string haystack, needle, replacement;
    int pos = 0;
    std::cout << "enter tha haystack : ";
    std::getline(std::cin, haystack);
    std::cout << "enter the needle to find : ";
    std::getline(std::cin, needle);
    std::cout << "enter the relacement : ";
    std::getline(std::cin, replacement);

    while ((pos = haystack.find(needle, pos)) != std::string::npos)
    {
        haystack.replace(pos, needle.length(), replacement);
        pos += replacement.length();
    }
    std::cout << haystack << std::endl;
    return 0;
}