#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n,k;cin>>n>>k;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        sort(v.begin(),v.end());
        int cnt1=0;
        int cnt2=0;
        for (int i = 0; i < n-1; i++)
        {
            if(abs(v[i]-v[i+1])>k)  cnt1++;
            //cout<<abs(v[i]-v[i+1])<<endl;
        }
        for (int i = n; i <= 0; i--)
        {
            if(abs(v[i]-v[i-1])>k) cnt2++; 
        }
        
        //cout<<min(cnt1,cnt2)<<endl;

    }
    

    return 0;
}