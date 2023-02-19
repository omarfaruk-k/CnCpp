#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void desen(int n ,int arr[]);
void print(int n, int arr[]);

int main(){
    int n,m;
    cin>>n;
    m =n*2;
    int arr1[n],arr2[n],arr3[m];

    input_arr(n,arr1);
    input_arr(n,arr2);

    for(int i=0;i<n;i++){
        arr3[i]=arr1[i];
    }
    for(int i=n;i<m;i++){
        arr3[i]=arr2[i];
    }
    //desen(m,arr3);
    print(m,arr3);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void desen(int m ,int arr[]){
    int temp=0;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    }

void print(int n, int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}