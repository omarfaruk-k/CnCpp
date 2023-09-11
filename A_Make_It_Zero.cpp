#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int cnt=0;
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i]==0)
            {
                cnt++;
            }
            
        }


        if (cnt==n)
        {
            cout<<0<<endl;
        }
        

        else if(n%2==0){cout<<2<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"1 "<<n<<endl;

        }
        else {
            cout<<4<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"1 "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;


        }        
    }
    

    return 0;
}