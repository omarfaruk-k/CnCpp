#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void print_arr(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    print_arr(n,arr);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void print_arr(int n ,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


