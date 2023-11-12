#include<iostream>
using namespace std;
int F[100];
int fib(int n)
{
    if(n<=1)
    {

        return n;
    }

    if(F[n]!= -1)
    {
        return F[n];
    }
    F[n]= fib(n-1)+ fib(n-2);
    return F[n];
}


int main()
{
    for(int i=0; i<10; i++)
    {
        F[i]=-1;
    }
    int n;
    cin>>n;
    int result =fib(n);
    cout<<result;
main();
}