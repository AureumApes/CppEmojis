#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char const *argv[])
{
    fstream file;
    file.open(argv[1],ios::out | ios::app);
    string message;
    cout << "Please give the content to append to " << argv[1] << "\n";
    cin >> message;
    file << message << "\n"<<endl;
    file.close();
    
    return 0;
}
