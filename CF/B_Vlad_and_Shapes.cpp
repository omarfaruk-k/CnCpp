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
        int arr[n+1];
        int cnt=0;
        bool tri = false;


        for (int i = 0; i < n; i++)
        {
            cnt = 0;
            string s;cin>>s;

            int a = count(s.begin(),s.end(),'1');
            if(a==1){
                tri = true;
                
            }
        }
        
        


        if(tri){
            cout<<"TRIANGLE"<<endl;
        }
        else cout<<"SQUARE"<<endl;




        
        
    }
    
     

    return 0;
}