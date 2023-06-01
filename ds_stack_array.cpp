#include<bits/stdc++.h>
using namespace std;

#define n 10


int stk[n];
int top=-1;

void push(int item){
    if(top==n)
    {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    top++;
    stk[top]=item;
}


void pop(){
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    
    top--;
}

void straverse(){
    for(int i=top;i>=0;i--){
        cout<<stk[i]<<" ";
    }

    cout<<endl;
}


int main(){
    
    push(40);
    push(30);
    push(20);
    push(10);

    straverse();

    pop();
    pop();

    straverse();
    return 0;
}