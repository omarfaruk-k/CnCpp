#include<bits/stdc++.h>
using namespace std;

struct node{         //a structure named node decleare
    int data;        //int type data stored in node
    node *next;    //next contain the memory address of next node
};

node *start= NULL;      //global decleration of start, which contain the memory address of first node

node *create_node(int item){      //function for creating node from free space
    node *newnode = new node;     //take memory from available list and creat a node 
    if (newnode ==NULL){        //condiotion of overflow, if there is no space available but we want to create a new node
        cout<<"OVERFLOW"<<endl;
        exit(1);         //exit the funcion if overflow
    }
    newnode->data=item;      //if it is not overflowed, then new noode created where item stored in data variable of new node
    newnode->next=NULL;      //and adress is empty
    return newnode;
    }



void insert_at_ending(node *newnode){ 
   if(start==NULL)                    //if strart empty, them there is no node. so we can not put our new node after any node as it is not exist
   { 
        start =newnode;       //new node here is the first node and we put the new node in the start
   }
    else
    {
        node *ptr=start;         //a node for traversing through the list

        while(ptr->next!=NULL){     //traversing till we reach the last node
        ptr=ptr->next;      //changing the address to the next node's address
        }

        ptr->next=newnode;  //linking the new node with the last node

    }
}


void insertion_of_newnode(node *newnode){   

    node *ptr=start;    //for traversing, storing the address in ptr
    node *temp;         //temp node to store the 2nd last node we checked. it keeps the node which is nearest smaller of our newnode.
    while(ptr->data<newnode->data){     //running the loop till the data of newnode smaller then the node we checking
        temp=ptr;       //storing the node which is checked
        ptr=ptr->next;  //changing the ptr node to its next node

    }
    newnode->next=temp->next;   //newnode will be placed after the temp node as tepm node is the previous node of ptr, which is bigger then newnode
    temp->next=newnode;

}

void travers(){
    node *ptr=start;
    while(ptr!=NULL)        //loop will run till the ptr is empty
    {
        cout<<ptr->data<<"  ";    
        ptr=ptr->next;          
    }
    cout<<endl;
    
}


int main(){
    
    for(int i=10;i<=100;i+=10)      //loop for creating sortes linked list
    {
        node *newnode =create_node(i);  //creating newnode with i value
        insert_at_ending(newnode);      //isnerting newnode in the ending
        
    }
    cout<<"The sorted linked list: ";
    travers();

    int item;
    cout<<"Enter the value:  ";
    cin>>item;      //the item which we want to input in our list

    node *newnode= create_node(item);       //creating a node of item
    insertion_of_newnode(newnode);      //inserting it in its suitable position

    cout<<"Linked list after insertion: "; 
    travers();

    return 0;
}