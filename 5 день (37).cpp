#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
 using namespace std;
 
struct sved {
    char *name;
    char *category;
    int age;
    int time;
}   ;
 
int main(){
   /* int n;
    cout<<"Vv. k-st sportsmenov: ";
    cin>>n;
    cout<<endl;
    //sved a[n]*/
    char category[2] ={'s','o'};
    char name[10]={'a','b','c','d','e','f','g','h','i','j'};
    int i=0;
    struct sved a[10];
    
    srand(time(NULL));
    for(i=0;i<10;++i){
        a[i].category = (char*)malloc(sizeof(char));
        a[i].name = (char*)malloc(sizeof(char));
    }
    for(i=0;i<10;++i){
        a[i].category = &category[rand()%2];
        a[i].name = &name[rand()%10];
        a[i].age = rand()%20 + 15;
        a[i].time = rand()%8;
    }
    for(i=0;i<10;++i){
    if(*a[i].category == 's')
        printf("category = %c\n name = %c\n age = %d\n time = %d\n", *a[i].category,*a[i].name,a[i].age,a[i].time);
    }
    for(i=0;i<10;++i){
        free(a[i].category);
        free(a[i].name);  
        }    
        return 0;
}
