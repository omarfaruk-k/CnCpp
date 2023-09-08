#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int h,lim;
        cin>>h>>lim;
        int cnt=0;
        int n=0;
        for (int i = 0; i < 5; i++)
        {
            if(n>=lim) break;
            else
            {
                n+=(h/2);
                cnt++;
            }
            
        }


            while (n<lim)
            {
                n+=h;
                cnt++;
            }
            
            
        cout<<cnt<<endl;
        
        
    }
    

    return 0;
}