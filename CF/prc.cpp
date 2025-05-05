// #include<bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define ull unsigned long long
// #define pb push_back
// #define pop pop_back

// typedef vector<int>  vec;
// typedef pair<int,int> pr;
// typedef vector<pr> vecpair;



// int32_t main(){

//     vec v;
//     int a;
//     int sum = 0;
//     while (cin>>a)
//     {
//         sum+=a;
//     }
    
//     cout<<sum<<endl;
    
     

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	
	int tot = a*b+(a+b)+min(a,b);
    cout<<tot;
}