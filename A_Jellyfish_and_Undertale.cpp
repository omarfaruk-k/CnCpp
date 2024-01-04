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
        int a,b,c;
        cin>>a>>b>>c;
        int arr[c+1];

        for (int i = 0; i < c; i++)
        {
            cin>>arr[i];
        }
        

        int cnt = 0;
        
        a--;

        for (int i = 0; i < c; i++)
        {
            if((arr[i])>a) cnt+=a;
            else cnt+=arr[i];
            
        }
        

        // while (b--)
        // {
        //     cnt++;
        //     if(c!=0 && b<=1){
        //         b = min(b+arr[i],a);
        //         i++;
        //         c--;
        //     }
        // }
        
        cout<<cnt+b<<endl;
    }
    
     

    return 0;
}