#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        // char arr[8][8];
        vector <char> cha;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char cc;cin>>cc;
                if(cc!='.') cha.push_back(cc);
            }
            
        }
        for(int i=0;i<cha.size();i++){
            cout<<cha[i];
        }cout<<endl;

    }
    

    return 0;
}