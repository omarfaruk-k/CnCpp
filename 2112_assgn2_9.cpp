#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
int max_func(int n, int arr[]);
int min_func(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    int max=max_func(n,arr);
    cout<<"Maximum number is: "<<max<<endl;
    int min=min_func(n,arr);
    cout<<"Minimum number is: "<<min<<endl;

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int max_func(int n, int arr[]){
    int res=arr[0];
    for(int i=0;i<n;i++){
        if(res<arr[i]){
            res=arr[i];
        }
    }
    return res;
}


int min_func(int n, int arr[]){
    int res=arr[0];
    for(int i=0;i<n;i++){
        if(res>arr[i]){
            res=arr[i];
        }
    }
    return res;
}
