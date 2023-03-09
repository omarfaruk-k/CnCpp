#include<iostream>          //Preprocessor derivaticve headerfile
using namespace std;        //using declaration


int main(){     //main function decleration
    int item,n;     //declering variable, item for the value we search for and n for the size of array
    cin>>item;      //taking iput off the desired item
    cin>>n;         //taking iput of size of array
    int ara[n];     //decleraing the array

    for (int i=0; i<n; i++)     //loop for array input 
    {
        cin>>ara[i];        //taking input at ith number in array
    }

    for(int i=0;i<n;i++){      //loop for searching array
        if(ara[i]==item){       //condition for chechikng whether the element and item equal
            cout<<i<<endl;      //ptinting the position off item
            break;      //if iteam found, beaking the loop
       }
    }
    


    return 0;   //return nothing from main function
}