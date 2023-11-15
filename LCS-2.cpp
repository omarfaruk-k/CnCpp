#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s1,s2;

     while (getline(cin,s1))         //infinite loop, will run til there is any input
    {
        getline(cin,s2);
        int n = s1.length();        //storing the lenght of strings for further use
        int m = s2.length();

        int arr[n+1][m+1];      //double array for tabulation 

        for (int i = 0; i <= n; i++)        
        {
            for (int j = 0; j <= m; j++)
            {
                if(i==0 || j ==0) arr[i][j]=0;      //storing 0 in intial row and column

                else if(s1[i-1]==s2[j-1]) arr[i][j] = 1+(arr[i-1][j-1]);        //if char of both string is similar then storing the value from diagonal cell with increasing one
                else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);          //if not similar then storing the maximum of  upper and left cell 
            }
            
        }

        cout<<arr[n][m]<<endl;      //ans is in the bottom most corner
        
    }
    
     

    return 0;
}