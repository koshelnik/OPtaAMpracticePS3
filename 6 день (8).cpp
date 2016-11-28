/*Дан файл, содержащий текст на русском языке. Составить в алфавитном
 порядке список всех слов, встречающихся в этом тексте.*/

#include<iostream>
#include<string>
#include<fstream>
#include <stdio.h>
#include<conio.h> 
#include <stdlib.h>

using namespace std;

int main()
{
    
    ofstream serg;
    serg.open("text.txt", ios::app);
    
    
        char a[100],t;
        int i,j;
        cout<<"Vvedite slovo : \n";
        cin>>("%s",a);
        serg<<a<<"\n\n";
        for(i=0;a[i]!='\0';i++)
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if (a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        printf("Slovo v alfavitnom poriadke: %s\n",a);
        
    	serg<<a<<"\n"; 
        serg.close();
        system("pause");
        return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
