/*Имеется типизированный файл, элементами которого
 являются отдельные буквы. Получить слово, образованное элементами
 файла, имеющими четный порядковый номер.*/
#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
ofstream ff;
ff.open("text.txt");
char c[100];
cin>>c;
int n=strlen(c);
for(int i=1;i<n;i+=2)
ff<<c[i]<<" ";
ff.close();
ifstream ff1("text.txt");
char d[100];int k=0;
for(int i=0;i<100;i++)
if(ff1>>d[i])
k++;
for(int i=0;i<k;i++)
cout<<d[i];
ff1.close();
system("pause");
}
