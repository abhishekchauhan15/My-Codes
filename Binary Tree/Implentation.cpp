#include<iostream> 
using namespace std;
struct Node{
    int key;
    Node* left=NULL;
    Node* right=NULL;

    Node(int k){
        key=k;
        left=right=NULL;
    }
};
int main(){
    Node* root=new Node(10);  
    root->left=new Node(50);  
    root->right=new Node(70);  
    root->right->right=new Node(70);  
    



return 0;
}