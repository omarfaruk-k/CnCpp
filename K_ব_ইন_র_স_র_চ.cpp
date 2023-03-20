#include<bits/stdc++.h>  //Preprocessor derivative header file
using namespace std;        //Using decleration 

int main(){                 //main function decleration

    int n,t,tgt;            // variable n for the eleemnt size, t for test case, tgt for the tergat we will be looking for
    scanf("%d%d",&n,&t);                 //taking input of n and t
    int arr[n];                     //decleration of array

    for(int i=0;i<n;i++)  scanf("%d",&arr[i]);      //taking input in array using loop
    sort(arr,arr+n);
    while(t--)              //while loop for total test case
    {
        scanf("%d",&tgt);           //taking input of target in tgt variable

        int ans=-1,b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
        while (b<=e){                                //loop for binary search, will stop if biggening is bigger then end
            if (arr[mid]==tgt){          //cheking if elemnt of mid of array is equal to tgt
                ans=mid;                //if element found, storing the mid in ans variable
                e=mid-1;               //to rechek for the first occurence, e is changing to run code and checking the first occurence 
            }else if(arr[mid]<tgt){                  //if tgt is not bigger, then e will remain same and b will move to right
                b=mid+1;            //changing the value of b to mid+1
            }else e=mid-1;

            mid=floor((b+e)/2);         //changning  the mid every time
        }
        printf("%d\n",ans);                       //else, the index number tgt in array will be print as result
    }
    

    return 0;       //return nothinng from main function
}