#include<bits/stdc++.h>
using namespace std;

//Insertion sort--------------------------------------------

void insertion(int ary[], int n){
    
    for(int i=0;i<n;i++){
    
    int x = ary[i];     //storing the value in variable
    int j = i-1;        //storing the index

    while (j>=0 && ary[j]>x)        //if index is greater or equal to 0 and also the stored value is smaller then this loop will run 
    {
        if(ary[j]>x){
            ary[j+1] = ary[j];  //shifting the values
            j--;        
        }
    }
    ary[j+1] = x;       //after all shifting of predecesor, the current value finds its position.
    }

    cout<<"Insertion sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<ary[i]<<" ";
    }cout<<endl;
    
}



//Selection sort---------------------------------------------------

void selection(int ary[], int n){
    for (int i = 0; i < n; i++)
    {
        int min = i;                //for selecting the minimum value of un sorted part, starting from first node as smallest
        
        for (int j = i; j < n; j++)     //this loop will run till i to n, means all unsorted part
        {
            if(ary[min]>ary[j]) min = j;        //checking for minimum
        }
        swap(ary[min],ary[i]);      //swaping ith value with minimum of i to n number index
    }

    cout<<"Selection sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<ary[i]<<" ";
    }cout<<endl;
    
}

//Bubble sort  ---------------------------------------------------------

void bubble(int ary[], int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)     
        {
            if(ary[j]>ary[j+1]) swap(ary[j], ary[j+1]);     //swaping the smallest of to adjacent index
        }
        
    }
    
    cout<<"Bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout<<ary[i]<<" ";
    }cout<<endl;

}



// Merge sort  --------------------------------------------------------

void merge(int l, int mid, int h, int arr[] ){
    int i=l, j = mid+1 ,k=l;
    int arr2[h+1];

    while (i<= mid && j<=h)
    {
        if(arr[i]<=arr[j]){     //if ith index is smallest or equal , it will be stored first. if ith index stored
            arr2[k]=arr[i];     //i ans k will be increased to one
            i++;
            k++;
        }
        else {
            arr2[k] = arr[j];       //if jth index is smallest then jth index will be stored
            j++;k++;
        }
    }

    while (k<=h)
    {
        if(i<=mid){     //if i not reached mid that means some of value is left behind
            arr2[k] = arr[i];
            i++;k++;
        }
        else if(j<=h){
            arr2[k] = arr[j];       //same for j
            j++;k++;
        }
    }
    for (int a = l; a <= h; a++)
    {
        arr[a] = arr2[a];           //storing all sorted vlaue from second array
    }
    
    
}


void mergesort(int l, int h, int arr[]){
    if(l<h){
        int mid=(l+h)/2;        //finding mid of array

        mergesort(l,mid,arr);       //re calling the funstion from low to mid 
        mergesort(mid+1,h, arr);        //re-calling funciton firm mid to end 

        merge(l,mid,h, arr);        //calling merge funciton at last
    }
}





void print(int arr[], int n){
    cout<<"Merge sort: ";
        for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}



int main(){
    int n;cin>>n;       //taking input of size of aarray
    int ar1[n];
    int ar2[n];     //as i am using 5 types of sorting simulteniosly, if i use only one array, this will get sorted in first call of any sort function
    int ar3[n];      //and when i will call other sort functions, other sort function will find totaly sorted array to sort, so we will not be able
    int ar4[n];     //to determine wheteher my codes are okay or not. so i used different array for diffrenet sort functions.
    int ar5[n];
    int a;

    for (int i = 0; i < n; i++)
    {
        cin>>a;
        ar1[i]=a;
        ar2[i]=a;       //inputing in differents array 
        ar3[i]=a;
        ar4[i]=a;
        ar5[i]=a;
        
    }
    
    insertion(ar1,n);       //calling respected funtion for those type of sort
    selection(ar2,n); 
    bubble(ar3,n);
    mergesort(0,n,ar4);  print(ar4, n);
}