#include<iostream> 

using namespace std;
struct Node{
    int data;
    Node* next=NULL;

    Node(int x){
        data=x;
        next=NULL;
    }

};

Node* deletionStart(Node* head){
    if(head==NULL)
        return NULL;

    else{
        Node* temp2=head->next;
 
        delete head;

        return temp2;
    }


}

void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
         cout<<curr->data<<" ";
         curr=curr->next;

    }
      
}


int main(){
    Node* head=new Node(10);
    Node* temp=new Node(20);
    Node* temp1=new Node(30);

    head->next=temp;
    temp->next=temp1;

    head=deletionStart(head);


    printList(head);


return 0;
}