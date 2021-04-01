#include<iostream> 
using namespace std;

int* deletion(int arr[]  ,int x, int n)
    for(int i=0; i<n; i++)
        if(arr[i]==x)
            break;
        
        if(i<n){
            n=n-1;
            for(int j=i; j<n; j++)
            arr[j]=arr[j+1];

     
        return n;

      
        
        
    

    
}

int main(){
int n, x;
int arr[100]={54,23,75,34};

cout<<"enter the number you want to delete ";
cin>>x;

deletion(arr, x,n=10);
for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";


return 0;
}