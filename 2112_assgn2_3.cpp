#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
int sum_arr(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    int sum = sum_arr(n,arr);
    cout<<sum<<endl;

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


int sum_arr(int n ,int arr[]){
    int sum =0,i=0;
    while (i<n)
    {
        sum+=arr[i];
        i++;
    }
    
    return sum;
}


