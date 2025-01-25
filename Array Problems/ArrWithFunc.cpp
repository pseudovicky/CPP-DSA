#include<iostream>
using namespace std;
// pass by reference -- 
// it's also change the value of original array elements 
// coz it's share the address of the variable not copy of the original one.

void squareArr(int Arr[],int size){
    cout<<"In function \n ";
    for(int i=0;i<size;i++){
        Arr[i] = 2 * Arr[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    squareArr(arr, 5);

    cout<<"In main function";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}