#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;cin>>a;
    while (a--)
    {
        int n;cin>>n;
        int e = 8;
        cout<<9;

        for (int i = 1; i < n; i++)
        {
            cout<<e;
            e++;
            if(e==10){
                e=0;

            }
        }
        cout<<endl;
    }
    
}