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
   int arr[n][n];
   int tot =0;

   for (int i = 0; i < n; i++)
   {    
        for (int j = 0; j < n; j++){
            int a;cin>>a;
            if (i == j || i == n/2 || j == n/2 || i+j==n-1){
                tot+=a;
            }
        }
    
   }
   
   cout<<tot<<endl;
     

    return 0;
}