#define 📣 printf
#define 🔢 int
#define 💻 main
#define 🔡 char
#define 🤐 ;
#define 🤔 if
#define 🖨️ std::ifstream
#define 💪 const
#define 📥 <iostream>
#define 🔤 <string>
#define 👣 <fstream>
#define 🔙 return 0

#include 📥
#include 👣
#include 🔤


🔢 💻(🔢 🔶, 🔡 💪 *🔷[])
{
    🖨️ 📄 🤐
    📄.open(🔷[1])🤐
    🤔(📄.is_open())
    {
        while (📄)
        {
            🔡 currentChar = 📄.get()🤐
            📣("%c", currentChar)🤐
        }
    }
    🔙 🤐
}
