#include<bits/stdc++.h>
using namespace std;

struct stk
{
    int data;
    stk *next;
};

stk *front = NULL;
stk *rear = NULL;

void push(int data){
    stk *newnode = new stk;
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    
        rear->next=newnode;
        rear=newnode;


}

// void pop(){
//     =top->next;
// }

void traverse(){
    stk *ptr=front;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }

    cout<<endl;
}

int main(){
    int n, data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        push(data);
    }

    traverse();

    // pop();
    // pop();
    // pop();
    traverse();

    return 0;
}