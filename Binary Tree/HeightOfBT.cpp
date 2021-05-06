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
int height(Node* root){  
    if(root==NULL)                      
    return 0;                                                       //o(n)
                                                                    //o(h)
    else
    return max(height(root->left),height(root->right))+1;
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


   cout<<height(root);
   


return 0;
}