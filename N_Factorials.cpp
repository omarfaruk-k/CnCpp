#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int dig,n,k=0,res=1;
    string cha;
    cin>>dig>>cha;
    n=cha.length();
    for (int i = 0; i < n; i++)
    {
        if(cha[i]=='!') k++;
    }

        while (dig>0)
        {
            res*=dig;
            dig-=k;
        }


   cout<<res<<endl;   
    

    return 0;
}