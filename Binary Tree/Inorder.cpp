#include<iostream> 
using namespace std;
struct Node{
    int key;
    Node* left=NULL;
    Node* right=NULL;

    Node(int k){
        key=k;
        right=left=NULL;
    }
};
void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);                                        //o(n)
        cout<<root->key<<" ";                                      //spaceh o()
        inorder(root->right);

    }
}


int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->left->right->left=new Node(70);
    root->left->right->right=new Node(80);
    root->right=new Node(30);
    root->right->right=new Node(60);


    inorder(root);
   


return 0;
}