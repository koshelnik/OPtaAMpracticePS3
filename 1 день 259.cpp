#include "iostream"
#include "string"
using namespace std;
int main()
{char ch;
    string str;
    do
    {ch = cin.get();
        if (ch != '*')
        {str += ch;
            str += ch;}
    } while (ch != '\n');
    cout << str << endl;
    system("pause");
    return 0;
} 
