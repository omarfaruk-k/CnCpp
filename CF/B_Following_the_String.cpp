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
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.push_back(a);
        }

        char c = 'a';
        char arr[n+1];

        map<char,int> mp;



        for (int i = 0; i < n; i++)
        {
            if(v[i]==0){
                arr[i] = c++;
                //if(v[i+1]==0) c++;
                
            }
            else if(v[i]==1){
                char b = arr[i-1];
                int x = 1;
                for (int j = i; j < n; j++)
                {
                    if(v[j]==x) {
                        arr[j] = b;
                        x++;
                    }
                }
                c++;
                
            }
            
        }









        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        
        
        
    }
    
     

    return 0;
}