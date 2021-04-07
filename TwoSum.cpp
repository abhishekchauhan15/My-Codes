#include<iostream> 
using namespace std;
int twoSum(int n, int target, int* first , int* second){
    int nums[n];
    int first;
     for(int i=0; i<n; i++){
            for(int j=i+1; j<n;  j++){
                if(nums[i]+nums[j]==target){
                    *first=nums[i];
                    *second=nums[j];
                
                break;
                }
                
            }
            
        }
        return 0;
}
  
int main(){
    int n, target, first , second; 
    cin>>n;
    cin>>target;
    int nums[n];
    for(int i=0; i<n; i++)
    cin>>nums[i];

    int ans=twoSum(n, target);

    

return 0;
}