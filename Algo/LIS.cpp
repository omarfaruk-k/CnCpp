#include<bits/stdc++.h>
using namespace std;





int main(){


    int n;cin>>n;
    int lis[n];
    int lis1[n];

    for (int i = 0; i < n; i++)
    {
        cin>>lis[i];
        lis1[i]= 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(lis[i]>=lis[j]) lis1[i] = max(lis1[i], lis1[j]+1);
        }
        
    }

    int max=0; int k=0;

    for (int i = 0; i < n; i++)
    {
        if(max<lis1[i]) {
            max=lis1[i];
            k=i;
            }
    }
    cout<<max<<endl;

    for (int i = k; i > 0; i--)
    {
        if(max<0) break;
        if(lis1[i]== max) {
            cout<<lis[i]<<" ";
            max--;
        }
    }
    
    
    
    
     cout<<max<<endl;

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int lis1[n],lis[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>lis1[i];
//         lis[i]=1;
//     }

//     for(int i=1;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(lis1[j]<=lis1[i])
//             {
//                 lis[i]=max(lis[i],1+lis[j]);
//             }
//         }
//     }
//     int max=0;

//     for(int i=0;i<n;i++)
//     {
//         if(max<lis[i])
//         {
//             max=lis[i];
//         }
//     }

//     cout<<max<<endl;
//     return 0;
// }