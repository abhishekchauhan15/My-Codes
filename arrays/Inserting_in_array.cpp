#include<iostream> 
using namespace std;

int* inserting(int arr[], int pos, int x, int n){

 
    for(int i=n; i>=pos; i--)
        arr[i]=arr[i-1];

        arr[pos-1]=x;
    
        return arr ; 
}

int main(){
int arr[100]={4,6,2,9};
int pos, x, n=4 ;
cout<<"enter the number you want to enter ";
cin>>x;
cout<<"enter the position you wan to enter the number ";
cin>>pos;



inserting(arr, pos, x, n);
if(pos>n)
n=pos;
else
n++;
for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";


return 0;
}