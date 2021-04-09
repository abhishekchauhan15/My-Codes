#include<iostream> 
using namespace std;
int LargestSubarray(int arr[], int n){
    int max_sum=INT_MIN;
    int curr_Sum=0;
    for(int i=0; i<n; i++){
        curr_Sum+=arr[i];
        if(max_sum<curr_Sum)
        max_sum=curr_Sum;

        if(curr_Sum<0)
        curr_Sum=0;
    }
    return max_sum;
}
int main(){
int n;
cout<<"size of array ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];


int ans=LargestSubarray(arr, n);
cout<<" sum of Largest Subarrya is: "<<ans;

return 0;
}