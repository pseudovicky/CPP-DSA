#include<iostream>
using namespace std;
// problem Statement : -
// decleare an array with size of 6. and swap the first element with last one and vise verse.
// Eg:- input: {10,100,4,20,70,30} expected output : {30,70,20,4,100.10}

int main(){
    int arr[6];
    int value;
    for(int el=0;el<6;el++){
        cout<<"input the value for the arr["<<el<<"] : ";
        cin>>value;
        arr[el] = value;
    }
    for(int el=0;el<6;el++){
        cout<<arr[el]<<" ";
    }
    cout<<"\n";

    int size = sizeof(arr)/4;
    for(int i=0;i<(sizeof(arr)/4)/2;i++){
        int sum = arr[i] + arr[size-1];
        // cout<<sum<<"\n";
        // cout<<arr[i]<<"\n";
        // cout<<arr[size-1]<<"\n";
        arr[i] = arr[size-1];
        // cout<<arr[i]<<"\n";
        // cout<<arr[size-1]<<"\n";
        arr[size-1] = sum-arr[i];
        // cout<<arr[size-1]<<"\n";
        // arr[size-1]= sum - arr[i];
        size--;
    }
    cout<<"\n";
    for(int el=0;el<6;el++){
        cout<<arr[el]<<" ";
    }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}