#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
//#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){

	string s;cin>>s;
	stack <char> stk;

	for(int i=0; i<s.size(); i++){
		if(stk.empty()) stk.push(s[i]);
		else if(stk.top()==s[i]) stk.pop();
		else stk.push(s[i]);
	}
	s.clear();
	int n=stk.size();
	while (n--)
	{
		s+=stk.top();
		stk.pop();
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;


    return 0;
}
