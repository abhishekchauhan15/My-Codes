#include<iostream>     
using namespace std;
struct Node{
    int data;
    Node* next=NULL;

    Node(int x){
        data=x;
        Node* next=NULL;

    }

                                    // deletion form last 
};


Node* del(Node* head){
    if(head==NULL)
    return NULL;

    else{
        Node* temp1=head->next;
        del head;
        return head;
    }

}

void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL);
    cout<<curr->data<<" ";
     curr=curr->next;


}


int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2 = new Node(30);

    head->next=temp1;
    temp1->next=temp2;

    printList(head);


return 0;
}