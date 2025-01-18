#include<iostream>
using namespace std;

// problem statement : -
// declare a array with size 10 then take an input. during the input you have to input 
// any of the number multiple times and then check the occurence of that number.

int main(){
    int arr[10];
    int n;
    for(int i=0;i<10;i++){
        cout<<"Input the value for the array index["<<i<<"] : ";
        cin>>n;
        arr[i] = n;
    }

    for(int el=0;el<10;el++){
        cout<<arr[el]<<"\t";
    }

    cout<<"Enter the perticular value from the given array to check the occurence of the number : ";
    int num;
    cin>>num;
    int count = 0;
    for(int i=0;i<10;i++){
        if(arr[i]==num){
            count++;
        }
    }

    cout<<"The occurence of "<<num<<" in the given array is "<<count<<" times.";

    return 0;
}