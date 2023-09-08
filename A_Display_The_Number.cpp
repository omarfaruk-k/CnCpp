#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {   
        int n;
        cin>>n;
        vector<int> vv;
        while (n)
        {
            if (n%2!=0)
            {
                vv.push_back(7);
                n-=3;
            }
            else {
                vv.push_back(1);
                n-=2;
            }
        }
        
        for (int i = 0; i < vv.size(); i++)
        {
            cout<<vv[i];
        }
        cout<<endl;
        
    }
    

    return 0;
}