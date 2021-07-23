#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    ifstream file;
    file.open(argv[1]);
    if(file.is_open())
    {
        while (file)
        {
            char currentChar = file.get();
            printf("%c", currentChar);
        }
    }
    return 0;
}
