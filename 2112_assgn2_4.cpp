#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void copy_arr(int n, int arr[], int arr2[]);
void print_arr(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n],arr2[n];

    input_arr(n,arr);
    copy_arr(n,arr,arr2);
    print_arr(n,arr2);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void copy_arr(int n, int arr[], int arr2[]){
    for(int i=0; i<n;i++){
        arr2[i]=arr[i];
    }

}

void print_arr(int n ,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


