#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;cin>>tc;      //taking input of test case

    while (tc--)        //loop to run till taste case
    {
        string a,b;     //decleraing string
        cin>>a>>b;      //taking input of two string
        int n = a.length();     //storing size of strings in variable
        int m = b.length();
        
        int e[n+1][m+1]; //decleraing a 2d array for tabulation

        for(int i = 0; i <= n; i++ ){       
            for(int j=0; j<= m ; j++){

                if(i==0) e[i][j]=j;     //storing j if i==0, i == 0 means we have to delete all to make empty string

                else if(j==0) e[i][j]=i;  //storing i if j==0, j == 0 means we have to insert all 

                else if(a[i-1] == b[j-1]) e[i][j] = e[i-1][j-1];  //if both char similar, then there will be no opreration

                else  e[i][j] = 1+min({e[i-1][j-1],e[i][j-1],e[i-1][j]});  //if both are not similar, we will do operatio which will cost 
                                                                          //less, so we will add 1 to the minimal of previos operations
                    

            }
        }

        cout<<e[n][m]<<endl;


     }
    
     

    return 0;
}