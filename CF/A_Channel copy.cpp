#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        vector<int> vv;
        int tot,on,notifi,max=0;
        char cc;

        cin>>tot>>on>>notifi;

        for (int i = 0; i < on; i++)
        {
            vv.push_back(1);
        }
        while (notifi--)
        {
            cin>>cc;
            if(cc=='+'){
                vv.push_back(1);
            }
            else if(cc=='-'){
                vv.pop_back();
            }
            if(max<vv.size()){
                max=vv.size();
            }
        }

        
        
        
        
    }
    

    return 0;
}