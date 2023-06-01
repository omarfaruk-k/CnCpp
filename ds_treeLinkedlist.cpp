#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node* right;
};

//node *root=NULL;

node *creat_node(int item){
    node *newnode= new node;

    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;


    return newnode;
}

void AddLeft(node *p, node *c){
    p->left=c;
}

void AddRight(node* p, node *c){
    p->right=c;
}

node *creat_tree(){
    node *two=creat_node(2);
    node *seven=creat_node(7);
    node *nine=creat_node(9);
    AddLeft(two,seven);
    AddRight(two,nine);

    node* one=creat_node(1);
    node *six=creat_node(6);
    AddLeft(seven,one);
    AddRight(seven,six);

    node* five=creat_node(5);
    node *ten=creat_node(10);
    AddLeft(six,five);
    AddRight(six,ten);

    node* eight=creat_node(8);
    AddRight(nine,eight);

    node* three=creat_node(3);
    node *four=creat_node(4);
    AddLeft(eight,three);
    AddRight(eight,four);


    return two;
}


void pre_order(node *node){
    cout<<node->data<<" ";
    if(node->left=NULL){
        pre_order(node->left); 

    }

    if(node->right!=NULL){
        pre_order(node->right);
    }
}

void in_order(node *node){
    if(node->left!=NULL){
        in_order(node->left);
    }
    cout<<node->data<<" ";
    if(node->right!=NULL){
        in_order(node->right);
    }
}


void post_order(node *node){
    if(node->left!=NULL){
        post_order(node->left);
    }
    if(node->right!=NULL){
        post_order(node->right);
    }

    cout<<node->data<<" ";
}

int main(){
    
    node *root=creat_tree();

    pre_order(root);
    cout<<endl;
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;
    return 0;
}