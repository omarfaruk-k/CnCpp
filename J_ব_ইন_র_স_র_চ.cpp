
/*My aproch was to find twice equal or bigger for every elemnt. if found, then increase the counter to one and delete
the elemnt which is bigger or equal of 2xArray[i] as we know that we cannot put this kangaroo to another kangaroos pocket,
so we should not search for its twice equal or bigger size. when all remaining element searched, then the answer is the
count and the elements left in array. but my programm's answer is not as expected*/



#include<bits/stdc++.h>   //preprocessor derivative headerfile
using namespace std;      //Using decleration

int main(){      //main function decleration
    
    int n,cont=0;       //variable n for the size off array
    cin>>n;              //taking input of n
    int arr[n];             //decleration of array sized n
    for(int i=0;i<n;i++) cin>>arr[i];           //taking input of array
    sort(arr,arr+n);                //sorting the array for binary search

    for(int i=0;i<n;i++)                  //loop for the total check 
    {
        int tgt=arr[i]*2;                   //seting tergat value twice of the value of element
        int b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
        while (b<=e && arr[mid]<tgt)       //loop for binary search, will stop if biggening is bigger then end and if target is bigger or equal
        { 
            if (arr[mid]<tgt){          //chechikng if elemnt of mid of array is bigger then target
                b=mid+1;            //changing the value of b to mid+1
            }
            mid=floor((b+e)/2);         //changning  the mid every time
        }
        if(arr[mid]>=tgt){         //checking if element is equal or bigger of tgt variable
            cont++;               //if true, increase the counter by one
            for(int j=arr[i];j<n;j++){        //loop for deleting the element we have searched for
                arr[j]=arr[j+1];            //shifting the elements left to delete the elemtn
                n--;                        //decreasing the size as one element deleted
            }            
            for(int j=mid;j<n;j++){          //loop for deleting the element we have found
                arr[j]=arr[j+1];            //shifting the elements left to delete the elemtn
                n--;                        //decreasing the size as one element deleted
            }
        }
       

        
    }cout<<cont+n<<endl;             //printing the last result

    return 0;       //return nothing from main function
}