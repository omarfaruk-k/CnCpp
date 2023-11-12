#include<bits/stdc++.h>
using namespace std;



int main(){

    string s1,s2;

    cin>>s1>>s2;

    int n=s1.length(); int m=s2.length();
    int arr[n+1][m+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i==0 || j==0) arr[i][j]=0;
            else if(s1[i-1]==s2[j-1]) arr[i][j] = 1+(arr[i-1][j-1]);
            else arr[i][j] = max(arr[i][j-1],arr[i-1][j]);
        }
        
    }
    
    cout<<arr[n][m]<<endl;
    
    vector<string> strr;

    for(int i = n; i>0; i++){
        for(int j=m; j>0 ; j++){
            if(arr[i][j]!=arr[i-1][j] || arr[i][j] != arr[i][j-1]) {
                strr.push_back(s1[i-1]);

        }
    }
    
     

    return 0;
}