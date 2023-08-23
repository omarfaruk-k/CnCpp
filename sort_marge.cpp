#include<bits/stdc++.h>   //preprocessor derivative header file
using namespace std;        //using decleration

int cnt=0; //declering a global variable for keep tracking the total comparison

void merge(int arr[], int s, int e){        //functoin for merging twp array ascendingly
    int mid=(s+e)/2;                    //finding the mid position of the array
    int n1=(mid-s)+1;               //n1 is the size for one of two array, as mid is index here, we add one to match the size of array
    int n2=e-mid;           //and er just substact the last index with the mid and we got array size for another array
    int m=s;        //storing the starting index in m


    int arr1[n1];       //decleration of array for storing one part before mid
    int arr2[n2];       //antother array for storing others value of the main array

    for (int i = 0; i < n1; i++)    //loop for storing the array value to another array till mid
    {
        arr1[i]=arr[m];
        m++;
    }
    for (int j = 0; j < n2; j++) //loop for sotring the array value ins the another array from after the mid
    {
        arr2[j]=arr[m];
        m++;
    }

    int i=0,j=0,k=s; //decleration of variable for storing the index of array

    while (i<n1 && j<n2)        //while loop for merger two array. this loop will run unless any of the two arra store all of its element to main array
    {
        
            if(arr1[i]<arr2[j]){        //checking if value of array1 is smaller then the value of array 2 
                arr[k]=arr1[i];     // if array 1's cvalue is smaller, just put the value in the main array
                k++,i++,cnt++;          //and increase the index and counter
            }
            else {
                arr[k]=arr2[j];     //or storing value of 2 and increasing the index
                k++,j++,cnt++;
            }
        
    }
    while (i<n1)            //loop for storing rest of the value if the index is not bigger then the size
    {
        arr[k]=arr1[i];     
        i++,k++,cnt++;
    }
    while (j<n2)            //anouther similar loop but works on the secount array
    {
        arr[k]=arr2[j];
        k++,j++,cnt++;
    }
      
}

void merge_sort(int arr[], int s, int e){       //funciton for merg sorting the array
    if(s>=e){               //base case if the end is smaller then start, thenm the array is end and  if both are equal then there is one element and nothing to sort
        return;
    }
    int mid=(s+e)/2;   //finding mid
    merge_sort(arr,s,mid);      //calling recursively s to mid
    merge_sort(arr,mid+1,e);     //  calling recuirsively from mid to 

    merge(arr,s,e);     //we call the merge funtions.
}


int main(){     //main funciton

    int n;      //variable for the size of the arrauy
    cin>>n;     //taking input

    int arr[n];     //declering am array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];        //taking input of array
    }
    
    merge_sort(arr,0,n-1); //calling merger sort function
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];       //printing the array
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<endl<<cnt<<endl;      //printing the count.
    

}