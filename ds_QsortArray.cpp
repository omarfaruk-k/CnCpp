#include<bits/stdc++.h>
using namespace std;

int a[100];


int part(int l, int h){
    int pivot= a[l];
    int i=l, j=h;

    while(i<j){
        while(a[i]<=pivot){i++;}
        while(a[j]>pivot) {j--;}

        if(i<j) swap(a[i],a[j]);
    }

    swap(a[l],a[j]);
    return j;
}

void qsort(int l, int h){
    if(l<h){
    int j=part(l,h);
    qsort(l,j);
    qsort(j+1,h);
    }
}

int main(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    a[n]=INT_MAX;

    qsort(0,n);


    for(int i=0;i<n;i++) {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    return 0;
}