#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, count=0,m=0,l=0;
    cin>>n;
    while (n--)
    {
        cin>>m;
        if(m>=0) l+=m;
        else{
               if(l!=0)
               { l-=1;
                }
                else count++;
            }
    }
    cout<<count;
    

    return 0;
}