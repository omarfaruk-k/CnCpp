#include<bits/stdc++.h>
using namespace std;

int main(){
    string arr;
    cin>>arr;
    int zer=0, on=0;
    int n=arr.length();
    for (int i = 0; i <n; i++)
    {
        if (arr[i]=='0')
        {
            zer++;
            if (zer>=7)
            {
                break;
            }
            
            on=0;
        }
        else
        {
            on++;
            if (on>=7)
            {
                break;
            }
            
            zer=0;
        }
        
        
    }
    
    if(zer>=7 || on>=7){ 
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }


    return 0;
}