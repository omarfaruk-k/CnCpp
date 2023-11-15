#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;




void merge(){
    
}



int mergesort( int arr[], int s, int e){
    if (e>s){
        int mid = (s+e)/2;
        mergesort(arr, s, mid);
        mergesort(arr , mid+1, e);

        marge(arr, s, e);
    }
}








int32_t main(){


    int n; cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    //====== selection sort ======//
    // for (int i = 0; i < n; i++)
    // {
    // int min=i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if(arr[min]>arr[j]) min=j;
    //     }
    //     swap(arr[min],arr[i]);
        
    // }
    




    //======= insertion sort =======//
    // for (int i = 0; i < n; i++)
    // {
    //     int x = arr[i];
    //     int j = i-1;

    //     while(j>=0 && arr[j]>x){
    //         arr[j+1] =  arr[j];
    //         j--;
    //     }
    //     arr[j+1] =  x;

    // }
    
    
    //====== bubble sort =========//
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         if(arr[j]> arr[j+1]) swap(arr[j],arr[j+1]);
    //     }
        
    // }
    
     
    // ======== merge sort ======= //
    mergesort(arr, 0 , n-1);


     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }cout<<endl;

     
    return 0;
}