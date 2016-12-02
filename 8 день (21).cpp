#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <windows.h>

using namespace std;
struct aerovolzal 
{  
 setlocale(LC_ALL,"russian");
int h; 
int h1; char PP[10];
}a[100],b;  
int n,s=0,m,q,q1;
void input(void)
{if(cin)
     {cout<<"Кiлькiсть елементів=";cin>>n;
     }
     for(int i=0;i<n;i++)
     { 
     cout<<"Введiть ПП : \n";
     cin>>a[i].PP;
	 cout<<"Введiть загальну кількість квитків для кожного рейса на поточну добу: \n";
     cin>>a[i].h;
     cout<<"Введiть кількість квитків у наявності для кожного рейса: \n";
     cin>>a[i].h1;
     }

ofstream output_file("BD.txt", ios::binary);
                  output_file.write((char*)&a, sizeof(aerovolzal)*n);
                  output_file.close();
                  ofstream file("kilkist.txt");
                       file<<n;
                       file.close();
}
void write(void)
{   
     if(cin)
     {cout<<"Кiлькiсть елементiв=";
     cin>>m;}
     cout<<"Допишiть: \n";
      for(int i=0;i<m;i++)
     { 
     cout<<"Введiть ПП : \n";
     cin>>a[i].PP;
	 cout<<"Введiть загальну кількість квитків для кожного рейса на поточну добу: \n";
     cin>>a[i].h;
     cout<<"Введiть кількість квитків у наявності для кожного рейса: \n";
     cin>>a[i].h1;
     }
 ofstream output_file("BD.txt", ios::ate|ios::app|ios::binary);
   // for(int i=0;i<n;i++)
     {output_file.write((char*)&a, sizeof(a));}
      output_file.close();
    ifstream file2("kilkist.txt");
                       file2>>q;
                       file2.close();
    ofstream file3("kilkist.txt");
                       file3<<q+m;
                       file3.close();
}
void deletE (void)
{
     char t;
    cout<<" Виберiть операцiю:\n";
    cout<<"y - видалення "<<endl<<"n - exit "<<endl;
    cin>>t;
switch(t)
{
case 'y':{ofstream vlad("BD.txt",ios_base::out | ios_base::trunc);
cout<<"Видалено!!!\n";
break;
}
case 'n':{exit(1);break;
}
default: cout<<"Error";
}
system("pause");
}
void read(void)
{     
      ifstream file4("kilkist.txt");
                       file4>>q1;
                       file4.close();
ifstream input_file("BD.txt", ios::in|ios::binary);                   
    
    aerovolzal C[q1];
    input_file.read((char*)&C, sizeof(C)); 
   for(int i=0;i<q1; i++)
  { cout<<endl<<"ПП"<<i+1<<" - "<<C[i].PP<<"\t";
   cout<<"Кiлькiсть квитків для кожного рейса на поточну добу - "<<C[i].h<<endl;
   cout<<"Кiлькiсть квитків у наявності для кожного рейса - "<<C[i].h1<<endl;
}
    system("pause");
} 
int main()
   {
   setlocale(LC_ALL,"Russian");
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   char key;
   while(1)
{
cout<<" Виберiть операцiю:\n";
    cout<<"i - введення "<<endl<<"w - допис "<<endl<<"r - зчитування "<<endl<<"d - видалення "<<endl<<"e - вихiд"<<endl;
    cin>>key;
    switch (key)
    {    
    case 'i': { input();break;}
    case 'w': { write();break;} 
    case 'r': { read(); break;} 
    case 'd': { deletE();break;} 
    case 'e': {exit (1);}      
    default: cout<<"Помилка!!!\n";
    }
  system("cls");  
}
    getch();  
    return 0;    
      }
