#include<iostream> 
using namespace std;
void reverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}                                         // time complexicity is o of n 

int main(){
int n;
cout<<"enter the size";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

reverse(arr, n);
for(int i=0; i<n; i++)
cout<<arr[i]<<" ";

return 0;
}