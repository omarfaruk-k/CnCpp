#include<bits/stdc++.h>
using namespace std;

#define n 10

int front = -1;
int rear =-1;

char q[n];

void push(char item){
    if((front == 0 && rear == n-1) || front == rear+1){
        cout<<"Overflow"<<endl;
    }
    if(front==-1 && rear ==-1){
        front++;
        rear++;
    }
    else if(front!=0 && rear== n-1){
        rear=0;
    }else{
        rear++;
    }

    q[rear]=item;

}


void qtrav(){

    for(int i=front;;){
        
        cout<<q[i]<<"  ";
        if(i==rear) break;

        if(i==n-1) i=0;
        else i++;

    }
    cout<<endl;

}

void pop(){
    if(front ==-1 && rear == -1){
        cout<<"Underflow"<<endl;
        exit(1);
    }
    else if(front==n-1) front = 0;
    else front++;
}


int main(){
    
    push('a');
    push('B');
    push('c');
    push('D');

    qtrav();
    pop();
    pop();
    qtrav();
    return 0;
}