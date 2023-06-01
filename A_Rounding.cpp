#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int last=n%10;
if(last!=0 && last>5){
    last=10-last;
    n=n+last;
}
else if(last!=0 && last<=5){
    n=n-last;
}
cout<<n<<endl;

return 0;
}