#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void print(int n, int arr[]);
void dlt(int n, int arr[],int pos);


int main(){
    int n,pos;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    cout<<"Enter position"<<endl;
    cin>>pos;

    dlt(n,arr,pos);

    print(n-1,arr);
  
    return 0;
}


void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void print(int n, int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


void dlt(int n, int arr[],int pos){
    for(int i=pos;i<n;i++){
        arr[i]= arr[i+1];
    }
}