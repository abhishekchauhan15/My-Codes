#include<iostream> 
using namespace std;
int neg(int arr[], int n){
    int end=n;
    for(int i=0; i<n; i++){
        if(arr[i]>0);
        int temp=arr[i];
        int arr[i]=arr[end];
        
    }
}

   

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;

    int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

int* ans=neg(arr, n);
cout<<ans;



return 0;
}