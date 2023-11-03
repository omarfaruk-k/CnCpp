#include<bits/stdc++.h>

int main(){
    long long int n,m,a, stoneIn_n, stoneIn_m;
    std::cin>>n>>m>>a;

    stoneIn_n=n/a;
    if (n%a!=0)  stoneIn_n++;

    stoneIn_m=m/a;
    if (m%a!=0) stoneIn_m++;

    std::cout<<stoneIn_m*stoneIn_n<<"\n";
}






