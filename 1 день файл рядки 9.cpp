#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
 {
 int n=50;
 int st_i=0;
char * s=new char[n];
 cout<<"Vvedite simvoly: ";
 cin.get();
 fgets(s,n,stdin);
for (int i=0; i<=strlen(s); i++)
 {
     if ((s[i] >= 48)&&(s[i] <= 59))
     {
           st_i++;    
     }  
}
cout<<"Simvoly = "<<strlen(s)<<endl;
cout<<"Suma  = "<<st_i;
    getch ();    
    return 0; 
}
