#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node*right;
};

node *creat(){
    int x;
    cin>>x;

    node* newnode= new node;

    if(x==-1){
        return 0;
    }

    newnode->data=x;
    cout<<"Left child of"<<x<<" :";
     newnode->left=creat();

    cout<<"Right child of"<<x<<" :";
    newnode->right=creat();

    return newnode;
}
 void inorder(node *root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
 }
  void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
 }
  void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
 }
 int main(){
     cout<<"Enter Root node: ";
    node *root;
    root=creat();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
 }
