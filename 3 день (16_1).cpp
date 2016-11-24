#include <iostream>
#include <math.h>
#include <iomanip>
 
 using namespace std;
 
double f(float x)
{  
    return (5*sin(x))/pow(cos(x-2),2);
}
 
int main(){
   double a=-3.14; 
   double b=3.14;
   double h=0.5;
   double x=0;
 
   for ( x=a; x<=b; x+=h)
   cout<<setw(10)<<left<<x<<"  --->  "<<f(x)<<endl;
 
    system("pause");   
}
