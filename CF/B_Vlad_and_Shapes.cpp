#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n;cin>>n;
        int arr[n+1][n+1];
        int cnt=0;


        for (int i = 0; i < n; i++)
        {
            string s;cin>>s;
            
            for (int j = 0; j <n ; j++)
            {
                arr[i][j]==s[j];
            }
            

        }
        

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cin>>arr[i][j];
        //     }
            
        // }


        int sqr = 0;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if(arr[i][j]==1){
                    if((arr[i+1][j]==1) && (arr[i][j+1]==1)){
                        sqr = 1;
                        break;
                    }
                }
            }

            if(sqr>0) break;
            
        }
        

        int a = sqrt(cnt);

        if(sqr==1){
            cout<<"SQUARE"<<endl;
        }
        else cout<<"TRIANGLE"<<endl;




        
        
    }
    
     

    return 0;
}