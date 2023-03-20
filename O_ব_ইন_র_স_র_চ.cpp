#include<bits/stdc++.h>     //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){                 //main function decleration
    int i=1;                //decleration of variable i for tracking the total test case

    while(i<=65){           //loop for running the programm in under test case limit
        int n,q;              //n for array size, q for total questions
        cin>>n>>q;              //traking input of n and q
        
        if(n==0 && q==0) break;     //condition if n==0 and q==0, the progrum will stop running

        int arr[n],arr2[q];                 //decleration of array, in 1st array the number of marbel will stored and in 2nd array, questions will be stored
        for(int i=0;i<n;i++) cin>>arr[i];       //arary input
        sort(arr,arr+n);                        //sorting array
        for(int i=0;i<q;i++) cin>>arr2[i];      //second array input

        cout<<"CASE# "<<i<<":"<<endl;       //printing the test case number

        for(int i=0;i<q;i++)              //while loop for total test case
        {   
   
            int ans=-1,b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
            while (b<=e){                                //loop for binary search, will stop if biggening is bigger then end
                if (arr[mid]==arr2[i]){          //cheking if elemnt of mid of array is equal to arr2[i]
                    ans=mid;                //if element found, storing the mid in ans variable
                   e=mid-1;               //to rechek for the first occurence, e is changing to run code and checking the first occurence 
                }else if(arr[mid]<arr2[i]){                  //if arr2[i] is not bigger, then e will remain same and b will move to right
                    b=mid+1;            //changing the value of b to mid+1
                }else e=mid-1;

                mid=floor((b+e)/2);         //changning  the mid every time
            }

            if(ans==-1)cout<<arr2[i]<<" not found"<<endl;                //printing if not found
            else cout<<arr2[i]<<" found at "<<ans+1<<endl;    //if found, printing the result
        }
        i++;        //incrementation of test case

    }

    return 0;       //returnming nothing
}