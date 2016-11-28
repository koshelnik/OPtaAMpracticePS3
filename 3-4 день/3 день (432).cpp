/*Даны действительные числа а0 ,..., а6 . Получить для х=1,3,4 значения p(x+1)-p(x), где 
 p(y) = a6 y^6 + a5 y^5 + ... + a0*/

#include <iostream>
#include <math.h>
 #include <stdio.h>
 
 using namespace std;
 
double p(double x, double *a, int cnt)
{
    double y = 0;
    for(int i=0;i<cnt;++i )
    {
        y+=a[i]*pow(x,cnt-1-i);
    }
    return y;
}
int main()
{
    const int size = 7;
    double a[size];
    
    cout<<"Vvedite chisla a:"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<4;i++)
    {
        cout<<"x = "<< i<<" = "<<p(i,a,size)<<endl;
    
    }
    system("pause");
}
