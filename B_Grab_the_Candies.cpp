#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t,arr_size;
    cin>>t;
    while (t--)
    {
        cin>>arr_size;
        int arrr[arr_size],even=0,odd=0;
        for (int i=0; i<arr_size; i++)
        {
            cin>>arrr[i];
            if(arrr[i]%2==0) even+=arrr[i];
            else odd+=arrr[i];

        }

        if(even>odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    

    return 0;
}