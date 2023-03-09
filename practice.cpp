#include<iostream> 
#include<math.h>
using namespace std;  //using declaration
int main()  //main function

{  
   int size,Q,item,B,E; 
   cin>>size>>Q;   
   int arr[size];  

   //loop for taking array elements input

   for(int i = 0; i < size ;i++)  
   {
    cin>>arr[i]; 
   }
   while(Q--)
   {
    cin>>item;  
   
   int MID = floor((B+E)/2); 

   B=0, E=size-1; 

   while(B<=E && arr[MID]!=item) 
   { 
    if(arr[MID]>item){ 

        E = MID-1;
    }else{
        B = MID+1; 
    }

    MID = floor((B+E)/2); 
   }

   if(B>E){  
    cout<<"-1"<<endl;  
   }else{  
    cout<<MID<<endl; 
   }
   }
    return 0;
}