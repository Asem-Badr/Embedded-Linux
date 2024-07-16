#include <iostream>
#include <fstream>
#include <iomanip>
// the program reads numbers from the file input.txt and writes the sum, average, minimum and maximum of the numbers to the stdout in a tabular format.
int main()
{
    std::fstream file;
    file.open("input.txt", std::ios::in);
    if (!file.is_open())
    {
        std::cout << "File not found" << std::endl;
        return 1;
    }
    std::fstream output;
    output.open("output.txt", std::ios::out);
    if (!output.is_open())
    {
        std::cout << "output file not found" << std::endl;
        return 1;
    }
    double sum = 0, avg = 0, min = 0, max = 0;
    double count = 0;
    double num;
    while (file >> num)
    {
        sum += num;
        if (count == 0)
        {
            min = num;
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
        count++;
    }
    avg = sum / count;
    output << "----------------------------------------------\n";
    output << "|" << std::setw(6) << std::setfill(' ') << "Sum" << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << "AVG" << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << "Min" << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << "Max" << std::setw(5) << std::setfill(' ') << "|" << std::endl;
    output << "----------------------------------------------\n";
    output << "|" << std::setw(6) << std::setfill(' ') << sum << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << avg << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << min << std::setw(5) << std::setfill(' ') << "|" << std::setw(6) << std::setfill(' ') << max << std::setw(5) << std::setfill(' ') << "|" << std::endl;
    output << "----------------------------------------------\n";

    file.close();
    output.close();

    return 0;
}