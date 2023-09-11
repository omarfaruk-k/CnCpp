#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int first, last, n;
        cin>>first>>last>>n;

        vector<int> vv;
        vv.push_back(last);

        int tt=1,el=0;
        for (int i = 1; i < n-1; i++)
        {
            
            vv.push_back(vv[i-1]-tt);
            tt++;
        }
        
        vv.push_back(first);
        reverse(vv.begin(),vv.end());
        


        int dif1=vv[1]-vv[0];
        int cntr=0;
        for (int i = 1; i < vv.size()-1; i++)
        {
            int dif2=vv[i+1]-vv[i];
            if(dif2>=dif1) {
                cntr++;
                break;
            }
            else
            {
                dif1=dif2;
            }
            
        }
        
        if(cntr==1){
            cout<<"-1"<<endl;
        }

        else{
        for(int i=0;i<vv.size();i++){
            cout<<vv[i]<<" ";
        }cout<<endl;
        }
        
    }
    

    return 0;
}