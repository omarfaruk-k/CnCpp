#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void print(int n, int arr[]);

int main(){
    int n,j=0,k=0;
    cin>>n;
    int arr[n],odd[n],even[n];

    input_arr(n,arr);


    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }else{
            odd[k]=arr[i];
            k++;
        }
    }

    cout<<"Even array is: ";
    print(j,even);
        cout<<"Odd array is: ";
    print(k,odd);

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