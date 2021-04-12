#include<iostream> 
using namespace std;
struct Node{
    int data;
    Node* next=NULL;

    Node(int x){
        data =x;
        next=NULL;
    }

  
};

  int searching(Node* head, int x){             // can be also done by recursive function 
    Node* curr=head;
    int pos=1;
    while(curr!=NULL){
        if(curr->data==x)
        return pos; 

        else{
            pos++;
            curr=curr->next;
        }
       
    }
      return -1;
   
}



int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);

    head->next=temp1;
    temp1->next=temp2;
  
    int x;
    cout<<"enter the no. to find ";
    cin>>x;
    int ans= searching(head, x);
    cout<<ans<<"\n";
    

return 0;
}