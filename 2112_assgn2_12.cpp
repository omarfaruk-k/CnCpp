#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void print(int n, int arr[]);
void sort(int m ,int arr[]);
void insrt(int n, int arr[],int pos, int item);


int main(){
    int n,item,pos;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    cout<<"Enter position and item."<<endl;
    cin>>pos>>item;

    insrt(n,arr,pos,item);
    sort(n+1,arr);
    print(n+1,arr);
  
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
            if(arr[i]>arr[j]){
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
    }cout<<endl;
}


void insrt(int n, int arr[],int pos, int item){
    for(int i=n;i>=pos;i--){
        arr[i+1]= arr[i];
    }
    arr[pos] = item;
}