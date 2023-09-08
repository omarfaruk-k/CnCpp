#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,n;
    cin>>t;

    while (t--)
    {
        string dig;
        cin>>dig;
        char arr[3]={0,0,0};
        int j=0;

        for (int i = 0; i < dig.length(); i++)
        {
            if(dig[i]=='1' || dig[i]=='3' || dig[i]=='7'){
                arr[j]=dig[i];
                j++;
            }
        }

        cout<<arr[1]<<arr[2]<<endl;
        

    }
    



    return 0;
}