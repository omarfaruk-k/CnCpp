#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *start=NULL;

node *create_node(int item)
{
    node *newnode= new node;
    newnode->data=item;
    newnode->next=NULL;

    return newnode;
}


void insert_node(node *newnode){
    if(start==NULL)
    {
        start=newnode;
    }
    else{
        node *ptr=start;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        
        ptr->next=newnode;
    }

}



void print_list(){
    node *ptr=start;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        
    }
    
}

int main(){
    int n,item;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        node *newnode = create_node(item);
        insert_node(newnode);
    }

    print_list();

    return 0;
}