#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<int> vp;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n=10;
        char arr[n][n];
        char c;
        int ans=0;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>c;
                if(c=='X'){
                    if((i==0 || i==9) || (j==0 || j==9)) ans+=1;
                    else if((i==1 || i==8) || (j==1 || j==8)) ans+=2;
                    else if((i==2 || i==7) || (j==2 || j==7)) ans+=3;
                    else if((i==3 || i==6) || (j==3 || j==6)) ans+=4;
                    else if((i==4 || i==5) || (j==4 || j==5)) ans+=5;


                    
                }


            }
            
        }
        

        cout<<ans<<endl;



    }
    
     

    return 0;
}