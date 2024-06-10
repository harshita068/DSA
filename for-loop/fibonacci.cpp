#include<iostream>
using namespace std;
int main(){
    int a,i;
    int c=0;
    int d=1;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<c<<" "<<d<<" ";
    for(i=1;i<=a;i++){
        int next=c+d;
        cout<<next<<" ";
        c=d;
        d=next;
        
    }
}