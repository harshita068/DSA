#include<iostream>
using namespace std;
bool check_fibo(int n){
    int x=0;
    int y=1;
    if(n==x || n==y){
        return true;

    }
    
    for(int i=1;i<=n;i++){
        if(x+y==n){
            return true;
        }
        int next=x+y;
        x=y;
        y=next;
    }
    return false;
}
int main(){
    int n;
    cout<<"enter number to be checked : ";
    cin>>n;
    if(check_fibo(n)){
        cout<<"number is fibonacci";
    }
    else{
        cout<<"not fibonacci";
    }
}