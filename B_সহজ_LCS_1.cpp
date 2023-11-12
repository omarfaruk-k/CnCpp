#include<iostream>
using namespace std;

int32_t main(){
    
    string s1,s2;   //two sring to compare each other 

    while(cin>>s1>>s2){  //the loop will run till any input given

    int n=s1.length(); int m=s2.length();     //storing the sring length to use later
    int arr[n+1][m+1];           //declaring a double array for tabulation method

    for (int i = 0; i <= n; i++)        //first loop to select char of first string
    {
        for (int j = 0; j <= m; j++)        //secound loop to select char of secound string
        {
            if(i==0 || j==0) arr[i][j]=0;       //checkng if row or collum is zero,then value will also be zero
            else if(s1[i-1]==s2[j-1]) arr[i][j] = 1+(arr[i-1][j-1]);  //if the chars are similer then we will store the diagonal value with one increment
            else arr[i][j] = max(arr[i][j-1],arr[i-1][j]);      //unless we will sotre the maximum vlaue of the previos column and previos row
        }
        
    }
    
    cout<<arr[n][m]<<endl;      //as tabulation is bottum up solution, the final result is in the last cell, so printing it. 
    }

    return 0;
}