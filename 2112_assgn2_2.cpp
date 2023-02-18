#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void rev_print(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    rev_print(n,arr);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void rev_print(int n ,int arr[]){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}


