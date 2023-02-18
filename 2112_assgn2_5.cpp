#include<iostream>
using namespace std;

void input_arr(int n, int arr[]);
void dupli(int n, int arr[]);

int main(){
    int n;
    cin>>n;
    int arr[n];

    input_arr(n,arr);
    dupli(n,arr);

    return 0;
}
void input_arr(int n, int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}


void dupli(int n ,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }

        }
    }

    
    cout<<count<<endl;
}


