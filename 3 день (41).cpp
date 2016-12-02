#include <iostream>
using namespace std;
int fib(int k)
{
    return k < 2 ? k : fib(k - 1) + fib(k - 2);
}
int main()
{   int n;cin>>n;
	if(n<=10)
	{
	for(int i=0;i<=n;i++)
    cout<< fib(i) << " ";
    }
    system("pause");
    return 0;
}
