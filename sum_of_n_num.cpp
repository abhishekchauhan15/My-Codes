// #include<iostream> 
// using namespace std;
// int sum(int n){
//     int osum=(n*(n+1))/2;
//     return osum ;
// }


// int main(){

//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int ans =sum(n);
//     cout<<ans;

// return 0;
// }


// #include<iostream> 
// using namespace std;
// int sum(int n){
//     return (n*(n+1))/2;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum (n);

// return 0;
// }


//                              it can be done by for loop also 



#include<iostream> 
using namespace std;
int osum=0;

int sum(int n){
    for(int i=1; i<=n; i++){
        osum+=i;
        
    }

    return osum;
}

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int ans =sum(n);
    cout<<ans;

return 0;
}