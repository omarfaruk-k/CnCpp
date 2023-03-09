#include<iostream>  //Preprocessor derivative headerfile
#include<math.h>    //Preprocessor derivative headerfile for floor
using namespace std; //Using declaration

int main(){             //decleration of main function
    int n,t;            //integer type variable decleratrion, n for the size of array and t for the total check
    cin>>n>>t;          //taking input of n and t
    int ara[n];         //decleration of n sized integer array
    
    for (int i = 0; i < n; i++)        //loop for aaray input
    {
        cin>>ara[i];            //taking iput at ith index
    }
    
    
    for(int i=1;i<n;i++){    //first loop for sorting, this will do loop for pass 

        for(int j=0;j<n-i;j++){          //secound loop for sorting, will run till the n-i elemnts off arrray
            if(ara[j]>ara[j+1]){         //Chechikg if right side elemnt is bigger then the element we itterratring 
                swap(ara[j],ara[j+1]);   //swaping if the element of right side is bigger
            }
        }
    }

    while (t--)                             // loop for the total check
    {
        int tgt;                           //decleration of variable for storting the target
        cin>>tgt;                           //taking input of targwet

        int b=0,e=n-1,mid=floor((b+e)/2);   //variable b for begening, e for end and mid for middle positon for binary search
        while (b<=e && ara[mid]!=tgt)       //loop for binary search, will stop if biggening is bigger then end and if tgt found
        {
            if (ara[mid]>tgt){          //chechikng if elemnt of mid of array is bigger then tgt
                e=mid-1;                // if elemn t is bigger then b will remain same and e will move to left
            }else{                  //if tgt is not bvigger then e will remain same and b will move to right
                b=mid+1;            //changing the value of b to mid+1
            }

            mid=floor((b+e)/2);         //changning  the mid ewveery time
            
        }
        if(ara[mid]==tgt){          //if tgt found in mid off array then the result will be n-mid, that means the count will be from mid to the last element
            cout<<n-mid<<endl;      //prinitng the result n-mid
        }
        else if(b>e){               //if b is bigger then e then the tgt is not in array
            cout<<n-b<<endl;        //if tgt not in array, then the result will be n-b. The total count is from the biginning to the last
        }

        
    }
    
    
    return 0;           //returning nothing from main function
}