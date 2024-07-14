#include <iostream>
#include <cstdlib>
class Vertex
{
private:
    int x;
    int y;

public:
    void populate_vetex()
    {
        x = rand() % 200 - 100;
        y = rand() % 200 - 100;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    std::string to_string()
    {
        return std::to_string(x) + " " + std::to_string(y);
    }
};

int main()
{
    Vertex v[5];
    for (int i = 0; i < 5; i++)
    {
        v[i].populate_vetex();
        std::cout << v[i].to_string() << std::endl;
    }
    return 0;
}