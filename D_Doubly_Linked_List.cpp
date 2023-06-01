#include<bits/stdc++.h>         //preprocessor headerfile
using namespace std;            //Using decleration


struct node         //decleration of structre named node
{
    int data;      //data variable that contain int type data of the node
    node *forw;     //node type variable that contain address of the forward node
    node *back;     //node type variable that contain address of the backward node
};



node *first = NULL;     //decleration of the start of linked list.
node *last = NULL;      //decleration of the end of linked list.



node *create_node(int item)     //function for creating new node
{
    node *newnode = new node;       //new keyword will crate new node if there is available space
    if(newnode==NULL){              //if there is no empty space in memory, newnode will be null
        cout<<"Overflow"<<endl;     //if newnode is null then this fucntion is overflown
        exit(1);                    //exiting if fucntion if overflowed
    }
    else{
        newnode->data=item;         //storing the value of item in the data part of the newnode
        newnode->forw=NULL;         //setting the forward adress of the newnode to null
        newnode->back=NULL;         //setting the backward adress of the newnode to null
    }

    return newnode;         //returning newnode
}





void insert_at_beginning(node *newnode)     //function for inserting node
{
    if(first==NULL && last==NULL){        //if first and last is null, there is no elemts in the linked lsist
        first=newnode;          //placing the newnode in the linked list
        last=newnode;       
    }
    else{                           
        newnode->forw=first;        //making connection between newnode and first node 
        first->back=newnode;        //placing the newnode in the back of the previous first node
        first=newnode;          //placing the newnode in first 
    }
}



void delete_frist(){        //function for frist node delete
    first=first->forw;      //changing the first node to its nex node
    first->back=NULL;       //first node has null backward as there is no node in the backward position of first node
}

void delete_last(){         //function for last node delete
    last=last->back;      //changing the last node to it's previos node
    last->forw=NULL;      //last node has null forward as there is no node in the forward position of last node
}


void delete_at(int tgt){      //function for delelting the node

    if(tgt==first->data)        //checking if the node we want to delete is at first
    {
        delete_frist();     //calling the first node delete function
    }
    else if(tgt==last->data)        //checking if the node we want to delete is at last
    {
        delete_last();     //calling the last node delete function
    }



    else{
        node *ptr = first;          //ptr node for running the loop
        node *save=NULL;        //node save for keeping the previous node of ptr
        while (ptr->data!=tgt)      //loop to go to the desired node
        {
            save=ptr;               //storing ptr in save before vhanging
            ptr=ptr->forw;          //changing the node everytime
       }
        if(ptr->data==tgt){         //checking if item is in the ptr node data
        save->forw=ptr->forw;      //making connection between the backward node of ptr with the forward node by placing the forward node of ptr in the backward node
        ptr->forw->back=save;      //making connection between the backward node of ptr with the forward node by placing the backward node of ptr in the forward node
        }

    }
}




void traverse(){            //function for traversing
    node *ptr=first;        //storing the first in the node named ptr for running the loop
    while (ptr!=NULL)
    {
        cout<<ptr->data;       //printing the data of ptr
        ptr=ptr->forw;          //changing the ptr everytime
        if(ptr!=NULL){
            cout<<" ";
        }
    } 
    
}


int main(){         //main function

    int n, item;
    string ch;
    cin>>n;                   //taking input of the number of the element
    for(int i=0;i<n;i++){          //loop wil run till n
        cin>>ch;
        if(ch=="insert" || ch=="delete") cin>>item;         //as insert and delte need data, we will take input it as int


        if(ch=="insert")
        {
            node *newnode= create_node(item);       //calling the function for creating node
            insert_at_beginning(newnode);       //function for inserting node at beginning
        }

        else if(ch=="delete")
        {
            delete_at(item);        //if input is delete, calling the function to delete
        }

        else if(ch=="deleteFirst")
        {
            delete_frist();             //if input says delete first , calling the function for deleting the first node
        }
        else if(ch=="deleteLast")
        {
            delete_last();                //if input says delete last , calling the function for deleting the last node
        }
    }

    traverse();   //function for printing the linkedList

    return 0; //main function return nothing
}