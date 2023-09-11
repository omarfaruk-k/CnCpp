#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int cnt=0;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            int Rcnt=0;

            for (int j = 0; j < 8; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='R') Rcnt++;
                if (Rcnt==8)
                {
                    cnt++;
            
                }
                
                
            }
            
        }

        if (cnt!=0)
        {
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
        
        
    }
    

    return 0;
}