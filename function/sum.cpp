#include<iostream>
using namespace std;

int sum(int a,int b){
    return(a+b);
}

int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"ENter the second number : ";
    cin>>b;
    int c = sum(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" = "<<c<<endl;
    return 0;
}