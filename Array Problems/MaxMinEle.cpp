#include<iostream>
using namespace std;
int main(){

    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int Arr[size];
    for(int i =0;i<(sizeof(Arr)/sizeof(int));i++){
        cout<<"Enter the number in the index ["<<i<<"] : ";
        cin>>Arr[i];
    }
    cout<<"Array elements : ";
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
    int smallest = INT_MAX;
    int maximum = INT_MIN;

    for(int i=0;i<size;i++){
        if(Arr[i]<smallest){
            smallest = Arr[i];
        }else if(Arr[i]>maximum){
            maximum = Arr[i];
        }
    }
    cout<<"\nThe samllest Element in the given array is "<<smallest;
    cout<<"\nThe Maximum Element in the given array is "<<maximum;
    return 0;
}