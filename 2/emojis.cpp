#include <iostream>
#include <fstream>

#define 🔢 int
#define 💻 main
#define 🔤 char
#define 🔠 string
#define 📣 cout <<
#define 🤐 ;
#define 🔐 .open
#define 🔒 .close
#define 👥 cin >>
#define 📉 return 0 🤐
#define 💪 const

using namespace std 🤐


🔢 💻(🔢 🔄, 🔤 💪 *🔶[])
{
    fstream 📄;
    📄 🔐(🔶[1],ios::out | ios::app) 🤐
    🔠 🔡 🤐
    📣 "Please give the content to append to " << 🔶[1] << "\n" 🤐
    👥 🔡 🤐
    📄 << 🔡 << "\n" << endl 🤐
    📄 🔒() 🤐
    
    📉
}
