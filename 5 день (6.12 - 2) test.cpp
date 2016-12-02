#include <iostream>
#include <sstream> 
#include <string>
#include <list> 
#include <algorithm> 
#include <iterator> 
#include <fstream>
 using namespace std;
 int main(){
   string str, word_1, word_2;
   char n[50], buff[100];
   cout << "Name file: "; 
   cin.getline(n,sizeof(n));
   ofstream fout(n);
    cout << "You string: ";
    getline(cin,str);
    fout << str;
    fout.close();
    cout << "Change from: ";
    cin >> word_1;
    cout << "Change to: ";
    cin >> word_2;
    ifstream fin(n);
    while(!fin.eof())
    {   
         fin.getline(buff,100);   
     }
    istringstream ist(buff);
    list<string>list; copy(istream_iterator<string>(ist),istream_iterator<string>(),back_inserter(list));
    replace(list.begin(), list.end(), word_1, word_2);
    fin.close();
    cout << "Result: ";
copy(list.begin(),list.end(),ostream_iterator<string>(cout, " "));    cout << endl;
    system("pause");
    return 0;
    }
