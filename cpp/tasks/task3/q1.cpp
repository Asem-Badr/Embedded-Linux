#include <iostream>
#include <cstdlib>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 200 -100, y = rand() % 200 -100;
        std::cout << x << " " << y << std::endl;
    }

    return 0;
}