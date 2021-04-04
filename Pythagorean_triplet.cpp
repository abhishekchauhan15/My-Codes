#include<iostream> 
using namespace std;

int max(int x, int y , int z){
    
int max1=0;
    if(x>y){
        if(x>z){
            max1=x;
        }else{
            max1=z;
        }
    }else if (y>x){
        if(y>z){
            max1=y;
        }else{
            max1=z;
        }
    }else{
        max1=z;
    }
    return max1;
}

bool check(int x, int y, int z){
int a=max(x,y,z);
int b,c;

if (a==x){
    b=y;
    c=z;

}else if (a==y){
    b=x;
    c=z;

}else{
    b=x;
    c=y;
}
if(a*a==b*b + c*c)
 return true ;
 return false ;

}



int main(){
    int x,y,z;
    cout<<"enter 1st no ";
    cin>>x;
     cout<<"enter 1st no ";
    cin>>y;
     cout<<"enter 1st no ";
    cin>>z;

if(check(x,y,z)){
    cout<<"The give no. is Pythagorean Triplet ";
}else {
    cout<<"The give no. is not Pythagorean Triplet ";
}



return 0;
}