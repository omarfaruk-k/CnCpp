#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
};

node *start = NULL;
node *last = NULL;

void push(int val){
    node *newnode = new node;
    if(newnode==NULL) {
        cout<<"Overflow"<<endl;
        exit(1);
    }

    newnode->data=val;
    newnode->next=NULL;

    if(start==NULL && last==NULL){
        start=newnode;
        last=newnode;
    }

    last->next=newnode;
    last=newnode;
}

void traverse(){
    node *ptr=start;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){
    int n,item;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>item;
        push(item);
    }

    traverse();
    return 0;
}