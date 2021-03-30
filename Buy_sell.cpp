#include<iostream> 
using namespace std;



int main(){
    int n;
    int arr[n];
    cout<<"enter the size";
    cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];

}
int min_price=INT_MAX;
int max_profit=0;


      for(int i=0; i<n; i++){
         if(min_price>arr[i]){
           min_price=arr[i];
        }else if (max_profit<arr[i]-min_price){
           max_profit=arr[i]-min_price;
        }
    }



cout<<"max profit is: "<<max_profit;



return 0;
}