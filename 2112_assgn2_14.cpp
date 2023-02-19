#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void sort(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    sort(n,arr);

    cout<<"Second Largest element is: "<<arr[1]<<endl;
    cout<<"Second Smallest element is: "<<arr[n-2]<<endl;
    

    return 0;
}


void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void sort(int m ,int arr[]){
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