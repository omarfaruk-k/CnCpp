#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void magic_index(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    magic_index(n,arr);

    return 0;
}


void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void magic_index(int n, int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            cout<<"Magic index is: "<<i<<endl;
            count++;
        }
    }if(count==0) cout<<"There is no magical index."<<endl;
}