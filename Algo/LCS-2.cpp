// #include<bits/stdc++.h>
// using namespace std;

// void lcs(string s1, string s2){
        
//         int n = s1.length();        //storing the lenght of strings for further use
//         int m = s2.length(); 

//         int arr[n+1][m+1];      //double array for tabulation 

//         for (int i = 0; i <= n; i++)        
//         {
//             for (int j = 0; j <= m; j++)
//             {
//                 if(i==0 || j ==0) arr[i][j]=0;      //storing 0 in intial row and column

//                 else if(s1[i-1]==s2[j-1]) {
//                     arr[i][j] = 1+(arr[i-1][j-1]);        //if char of both string is similar then storing the value from diagonal cell with increasing one
//                     
//                 }
//                 else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);          //if not similar then storing the maximum of  upper and left cell 
//             }
            
//         }

//         cout<<"LCS leangth: "<<arr[n][m]<<endl;      //ans is in the bottom most corner, as it is bottum up aproach

//     int i = n, j = m, k = arr[n][m] - 1;

//     while (i > 0 && j > 0) {
//         if (s1[i - 1] == s2[j - 1]) {
//             lcsString[k] = s1[i - 1];
//             i--;
//             j--;
//             k--;
//         } else if (arr[i - 1][j] > arr[i][j - 1]) {
//             i--;
//         } else {
//             j--;
//         }
//     }

//     cout<<"LCS string: ";
//     for(auto i:lcsString) cout<<i;
//     cout<<endl;
// }


// int main(){
    
//     string s1,s2;

//     cin>>s1>>s2;

//     lcs(s1,s2);
        
    
    
     

//     return 0;
// }













#include<bits/stdc++.h>
using namespace std;



void lcs(string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    int lcs[n+1][m+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i==0 || j==0) lcs[i][j]= 0;
            else if(s1[i-1]==s2[j-1]) lcs[i][j] = 1+(lcs[i-1][j-1]);
            else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
        }
        
    }
    
    int v= lcs[n][m];
    cout<<"LCS leangth: "<<v<<endl;

    int i = n; int j = m;
    string lcsStr;

    while (i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1]) {
            lcsStr = s1[i-1]+lcsStr;
            i--;j--;
            }
        else if(lcs[i-1][j]>lcs[i][j-1]){
            i--;
        }
        else j--;


    }
    cout<<"LCS string: "<<lcsStr;
    



}
int32_t main(){

    string s1, s2;
    cin>>s1>>s2;
    lcs(s1,s2);


    
     

    return 0;
}