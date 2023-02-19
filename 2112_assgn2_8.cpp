#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void freq(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    freq(n,arr);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void freq(int n ,int arr[]){

    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }cout<<"The element "<<arr[i]<<" is repeated "<<count<<" times in array."<<endl;
    }
}


