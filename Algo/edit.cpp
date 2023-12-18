#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();


    int edit[n+1][m+1];

    for (int i = 0; i <= n ; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i==0) edit[i][j] = j;
            else if(j==0) edit[i][j] = i;

            else if(s1[i-1]==s2[j-1]) edit[i][j] = edit[i-1][j-1];
            else{
                int v = min(edit[i][j-1], edit[i-1][j]);
                 edit[i][j] = 1+ min(v, edit[i-1][j-1]);
            }
        }
        
    }

    cout<<edit[n][m]<<endl;

    int i=n, j=m;
    while(i>0 && j>0)
    {
        if(s1[j]==s2[i]){
            i--;j--;
        }
        else{
            if((edit[i][j]-1)==edit[i-1][j-1]){
                cout<<s1[j]<<" Replaced to "<<s2[i]<<endl;
                i--;j--;
            }

            else if((edit[i][j]-1) ==edit[i][j-1]){
                cout<<s1[j]<<" is deleted"<<endl;
                j--;
            }

            else if ((edit[i][j]-1) == edit[i-1][j]){
                cout<<s2[i]<<" is inserted"<<endl;
                i--;
            }
        }
    }
    
    
}