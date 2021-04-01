#include<iostream> 
using namespace std;

int largest(int arr[]){


    int maxId=0;
    for(int i=1; i<4; i++){
        if(arr[i]>arr[maxId])
            maxId=i;
        }
            return maxId;
}
int main(){

int arr[4]={3,65,12,87};
int ans =largest(arr);
cout<<ans;

return 0;
}