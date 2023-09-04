//visit this for printig LIS: https://cp-algorithms.com/sequences/longest_increasing_subsequence.html#finding-the-length
// also :  https://github.com/me-shaon/bangla-programming-resources

#include<bits/stdc++.h>
using namespace std;

int main(){
       int n;cin>>n;
       int list[n];

       for(int i=0;i<n;i++){
              cin>>list[i];
       }

       int lis[n];
       for(int i=0;i<n;i++){
              lis[i]=1;
       }



       for(int i=1;i<n;i++){
              for(int j=0;j<i;j++){
                     if(list[j]<list[i]){
                            lis[i]=max(lis[i],1+lis[j]);
                     }
              }
       }


       for(int i=0;i<n;i++){
              cout<<lis[i]<<" ";
       }cout<<endl;

       int max=0;
       for(int i=0;i<n;i++){
              if(lis[i]>max) max=lis[i];
       }
       cout<<max<<endl;

}

