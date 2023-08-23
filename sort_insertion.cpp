#include<bits/stdc++.h>   //preprocessor derivative header file
using namespace std;        //using decleration


void count_sort(int arr[],int n){  //function for insertion sort
    int max=arr[0];                 //storing first element as max
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]) max=arr[i];  //finding the largest element
    }

    int arr2[max+1];            //creating a function with the size one bigger then the biggest value

    for (int i = 0; i < max+1; i++)
    {
        arr2[i]=0;      //as memset dosent woek properly, using for loop to set all velue to zero initailly
    }
    
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]=arr2[arr[i]]+1; //for every value in array arr, the same index in the array arr2 increased by one to keep track of the values
    }

    int i=0,j=0;

    while (i<=max)      //the loop will run till the i got to equal to max 
    {
        if(arr2[i]>0){      //condiotion if the ith value is bigger then 0
            arr[j]=i;           //storing the index of the arr2 in our nmain array
            arr2[i]=arr2[i]-1;  //decreseding the index counter to lower
            j++;        
        }
        else {         //if the index is not biogger then zer, then the index must not be in our given array
            i++;        //so we increase the index numbwer to further check
        }
    }
    

    
    
    
}

int main(){             //maion function

    int n; cin>>n;      //taking inpout of the sieze 
    int arr[n];
    for (int i = 0; i < n; i++)
    {   
        cin>>arr[i];        //taking inpuit of array
    }
    
    count_sort(arr,n);      //calling the count sort function

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i];    //printing the fuinal array
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;
    

    return 0;
}