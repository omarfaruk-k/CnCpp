#include<bits/stdc++.h>
using namespace std;


struct STACK
{
    string str;
    STACK *next;
};

STACK *top = NULL;

void push(string item){
    STACK *snew = new STACK;

    if(snew==NULL){
        cout<<"Overflow"<<endl;
        exit(1);
    }

    snew->str=item;
    snew->next=top;
    top=snew;
}

void pop(){
    if(top==NULL){
        cout<<"Underflow"<<endl;
        exit(1);
    }
    top=top->next;
}


void straverse(){
    STACK *node = top;
    while (node!=NULL)
    {
        cout<<node->str<<" ";
        node = node->next;
    }

    cout<<endl;
    
}

int main(){
    
    push("DDD");
    push("CCC");
    push("BBB");
    push("AAA");

    straverse();


    pop();
    straverse();

    return 0;
}