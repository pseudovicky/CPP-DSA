#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"ENter the size of an array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the el for the index["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"Array Elements : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    // sorting 
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }

        }
    }

    cout<<"\nSorted Array Elements : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}