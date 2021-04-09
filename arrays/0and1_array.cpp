#include<iostream> 
using namespace std;
void sw(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0)
            count++;
        
        }
        for(int i=0;i<count; i++)
            arr[i]=0;

        for(int i=count; i<n; i++)
        arr[i]=1;

    

}
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;

    int arr[n];
for(int i=0; i<n; i++)
cin>>arr[i];

sw(arr, n);


for(int i=0; i<n; i++)
cout<<arr[i]<<" ";

    

return 0;
}