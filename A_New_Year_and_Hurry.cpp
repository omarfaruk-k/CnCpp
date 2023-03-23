#include<bits/stdc++.h>  
using namespace std;        

int main(){            
    
    int t,q;  
    cin>>q>>t;   
    t=240-t;  

    int arr[q];         
    arr[0]=5;    
    int k=2;            
    for(int i=1;i<q;i++){           
        arr[i]=(k*5)+arr[i-1];  
        k++;     
    }

    int b=0,e=q-1,mid=floor((b+e)/2); 
    while (b<=e && arr[mid]!=t)      
    {
        if (arr[mid]>t){
            e=mid-1;              
        }else{               
            b=mid+1;           
        }

        mid=floor((b+e)/2);     
            
    }
    if(arr[mid]==t){             
        cout<<mid+1<<endl;
    }else if(b>e) cout<<b<<endl;   




    return 0;   
}