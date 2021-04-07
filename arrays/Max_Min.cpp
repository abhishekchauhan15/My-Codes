#include<iostream> 
using namespace std;
int MaxMin(int arr[], int n){
        int max=INT_MIN;
        int min=INT_MAX;
        for(int i=0; i<n; i++){
            if(max<arr[i])
            max=arr[i];

            else if(min>arr[i])                     //o(n)
            min=arr[i];

        }
        return max;

    }
int main(){
    

int n;
cout<<"enter the size";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

int ans=MaxMin(arr, n);
cout<<ans;


return 0;
}