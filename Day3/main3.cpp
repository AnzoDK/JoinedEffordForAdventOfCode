#include <iostream>
#include <fstream>
#include <vector>

std::string getGamma(std::string s)
{
    return "";
}

int main()
{
    std::ifstream input;
    input.open("input.txt");

    if(input.is_open())
    {
        std::string s = "";
        while(getline(input, s))
        {
            std::cout << s << std::endl;
        }
    }
}
