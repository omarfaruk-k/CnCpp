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
        vec v;
        int cnt=0;

        string s;cin>>s;

        bool ans = 0;
        
        
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]>s[i+1]){
                for ( int j=i; j < n; j++)
                {
                    // s[j]=='0'?s[j]='1':s[j]=0;
                    if(s[j]=='0') s[j]='1';
                    else if(s[j]=='1') s[j]='0';
                }
                cout<<s<<endl;
                cnt++;
            }
        }
        
        

            
            // !is_sorted(s.begin(),s.end())
            
        
        
        //cout<<cnt<<endl;
        //cout<<endl<<endl;
        
    }
    
     

    return 0;
}










// for (int i = 0; i < n; i++)
//         {
//             v.push_back(s[i]-'0');
//         }


        
//         for (int i = 0; i < n; i++)
//         {
//             int doo = -1;
//             for (int j = 0; j < n; j++)
//             {
//                 if(j<i){
//                     doo=i;
//                     break;
//                 }
//             }

//             if(doo != -1) {
//                 for (int j = doo; j < n; j++)
//                 {
//                     v[j] = !v[j];
//                 }
//                     cnt++;
//                     doo=-1;
                
//             }


//             for(auto i:v) cout<<i;
//             cout<<endl;
            
//         }
        
//         //cout<<cnt<<endl;
//         cout<<endl;
        