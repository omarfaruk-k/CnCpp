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

    int n;cin>>n;

    char s[n][n];
    //int cntDot = 0;

    for(int i =0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            cin>>s[i][j];
            //if(s[i][j]=='.') cntDot++;
        }
        
    }   

    
bool ans = true;

    for (int i = 0; i < n-2; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            if(s[i][j] == '.'){
                
                if(s[i+1][j-1] =='#' || s[i+1][j]=='#' || s[i+1][j+1]=='#' || s[i+2][j] == '#'){
                    ans = false;
                    break;
                }

                else {
                    s[i][j] ='#';  s[i+1][j-1] ='#'; s[i+1][j] ='#'; s[i+1][j+1] ='#'; s[i+2][j] = '#';
                }
            }
        }

        if(ans==false)  break;
        
    }


    
        for(int i = 0; i<n; i++){
            for (int j = 0; j < n; j++)
                {
            
                if(s[i][j]=='.')
                    ans = false;
                }
        
        }
     

     if(ans) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;







    return 0;
}