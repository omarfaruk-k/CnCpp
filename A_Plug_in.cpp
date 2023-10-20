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

	string s;cin>>s;
 
	for (int i=s.size()-2;i>=0;i--)
	{
		if (s[i]==s[i+1])
		s.erase(i,2);
	}
	cout<<s<<endl;

    return 0;
}