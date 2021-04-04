#include<iostream> 
using namespace std;

int fact(int a){
    int factorial=1;
    for(int i=2; i<=a; i++){
        factorial*=i;
        
    }
    return factorial ;
}


int main(){
    int n,r;
    cout<<"enter the n";
    cin>>n;
    cout<<"enter the r";
    cin>>r;
    int ans =fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
return 0;
}